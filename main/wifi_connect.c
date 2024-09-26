#include "wifi_connect.h"
#include "time_display.h"
#include "lvgl.h"
#include "esp_log.h"
#include "ui/ui.h"
#include <stdlib.h>  // For malloc
#include "esp_sntp.h"
#include "nvs_flash.h"
#include "nvs.h"

#define DEFAULT_SCAN_LIST_SIZE 10

// Declare the functions from main.c
extern bool example_lvgl_lock(int timeout_ms);
extern void example_lvgl_unlock(void);

static const char *TAG = "example";

// Function to save Wi-Fi credentials to NVS
void save_wifi_credentials(const char* ssid, const char* password) {
    nvs_handle_t nvs_handle;
    esp_err_t err = nvs_open("wifi_creds", NVS_READWRITE, &nvs_handle);
    if (err == ESP_OK) {
        nvs_set_str(nvs_handle, "ssid", ssid);
        nvs_set_str(nvs_handle, "password", password);
        nvs_commit(nvs_handle);
        nvs_close(nvs_handle);
        ESP_LOGI(TAG, "Wi-Fi credentials saved to NVS");
    } else {
        ESP_LOGE(TAG, "Failed to open NVS handle");
    }
}

// Function to retrieve Wi-Fi credentials from NVS
bool load_wifi_credentials(char* ssid, size_t ssid_size, char* password, size_t password_size) {
    nvs_handle_t nvs_handle;
    esp_err_t err = nvs_open("wifi_creds", NVS_READONLY, &nvs_handle);
    if (err == ESP_OK) {
        err = nvs_get_str(nvs_handle, "ssid", ssid, &ssid_size);
        if (err == ESP_OK) {
            err = nvs_get_str(nvs_handle, "password", password, &password_size);
            if (err == ESP_OK) {
                ESP_LOGI(TAG, "Wi-Fi credentials loaded from NVS");
                nvs_close(nvs_handle);
                return true;
            }
        }
        nvs_close(nvs_handle);
    }
    ESP_LOGE(TAG, "Failed to load Wi-Fi credentials from NVS");
    return false;
}

// Wi-Fi event handler
static void wifi_event_handler(void* arg, esp_event_base_t event_base, int32_t event_id, void* event_data) {
    if (event_base == WIFI_EVENT && event_id == WIFI_EVENT_STA_START) {
        esp_wifi_connect();
    } else if (event_base == WIFI_EVENT && event_id == WIFI_EVENT_STA_DISCONNECTED) {
        if (example_lvgl_lock(-1)) {
            _ui_label_set_property(ui_Status, _UI_LABEL_PROPERTY_TEXT, "Disconnected, retrying...");
            example_lvgl_unlock();
        }
        esp_wifi_connect();
    } else if (event_base == IP_EVENT && event_id == IP_EVENT_STA_GOT_IP) {
        ip_event_got_ip_t* event = (ip_event_got_ip_t*) event_data;
        char buf[64];
        sprintf(buf, "Connected! IP: " IPSTR, IP2STR(&event->ip_info.ip));
        if (example_lvgl_lock(-1)) {
            _ui_label_set_property(ui_Status, _UI_LABEL_PROPERTY_TEXT, buf);
            example_lvgl_unlock();
        }

        // Initialize SNTP
        sntp_setoperatingmode(SNTP_OPMODE_POLL);
        sntp_setservername(0, "pool.ntp.org");
        sntp_init();
        // Now that we have a connection, sync time and start the clock update task
        ESP_LOGI(TAG, "Starting time synchronisation...");
        xTaskCreate(updateClockTask, "updateClockTask", 4096, NULL, 5, NULL);
    }
}

// Wi-Fi initialization
void wifi_init(void) {
    esp_netif_init();
    esp_event_loop_create_default();
    esp_netif_create_default_wifi_sta();

    wifi_init_config_t cfg = WIFI_INIT_CONFIG_DEFAULT();
    esp_wifi_init(&cfg);

    esp_event_handler_register(WIFI_EVENT, ESP_EVENT_ANY_ID, &wifi_event_handler, NULL);
    esp_event_handler_register(IP_EVENT, IP_EVENT_STA_GOT_IP, &wifi_event_handler, NULL);

    wifi_config_t wifi_config = {
        .sta = {
            .ssid = "",  // Set this in wifi_connect
            .password = "",  // Set this in wifi_connect
        },
    };

    // Try to load saved Wi-Fi credentials
    char ssid[32] = {0};
    char password[64] = {0};
    if (load_wifi_credentials(ssid, sizeof(ssid), password, sizeof(password))) {
        // Set Wi-Fi credentials from NVS if they exist
        strncpy((char *) wifi_config.sta.ssid, ssid, sizeof(wifi_config.sta.ssid) - 1);
        strncpy((char *) wifi_config.sta.password, password, sizeof(wifi_config.sta.password) - 1);
        wifi_config.sta.ssid[sizeof(wifi_config.sta.ssid) - 1] = '\0';
        wifi_config.sta.password[sizeof(wifi_config.sta.password) - 1] = '\0';
    } else {
        ESP_LOGI(TAG, "No Wi-Fi credentials saved. Waiting for user input.");
        // You may want to handle this differently, like showing a UI prompt
    }

    esp_wifi_set_mode(WIFI_MODE_STA);
    esp_wifi_set_config(ESP_IF_WIFI_STA, &wifi_config);
    esp_wifi_start();
}

// Wi-Fi connection function with enhanced safety checks
void wifi_connect(const char* ssid, const char* password) {
    wifi_config_t wifi_config;

    // Ensure that SSID and Password text areas are not NULL before proceeding
    if (ssid == NULL || password == NULL) {
        ESP_LOGE(TAG, "SSID or Password is NULL");
        return;
    }

    // Log the SSID (Avoid logging sensitive information such as passwords in production)
    char *log_buffer = (char *) malloc(256 * sizeof(char));
    if (log_buffer == NULL) {
        ESP_LOGE(TAG, "Failed to allocate memory for log buffer");
        return;
    }

    sprintf(log_buffer, "Attempting to connect to SSID: %s", ssid);
    ESP_LOGI(TAG, "%s", log_buffer);

    // Safely copy SSID and password
    strncpy((char *) wifi_config.sta.ssid, ssid, sizeof(wifi_config.sta.ssid) - 1);
    strncpy((char *) wifi_config.sta.password, password, sizeof(wifi_config.sta.password) - 1);

    // Ensure the strings are null-terminated
    wifi_config.sta.ssid[sizeof(wifi_config.sta.ssid) - 1] = '\0';
    wifi_config.sta.password[sizeof(wifi_config.sta.password) - 1] = '\0';

    // Lock the mutex before accessing the Wi-Fi API
    if (example_lvgl_lock(-1)) {
        // Set the Wi-Fi configuration
        esp_wifi_set_config(ESP_IF_WIFI_STA, &wifi_config);
        esp_wifi_connect();

        // Update the UI with "Connecting" status
        if (ui_Status != NULL) {
            _ui_label_set_property(ui_Status, _UI_LABEL_PROPERTY_TEXT, "Connecting");
        } else {
            ESP_LOGE(TAG, "UI label for Status is NULL");
        }

        example_lvgl_unlock();  // Unlock after UI update
    }

    // Save Wi-Fi credentials in NVS
    save_wifi_credentials(ssid, password);

    free(log_buffer);  // Free the dynamically allocated memory
}

// Button click event handler
void on_connect_button_click(lv_event_t * e) {
    const char *ssid = lv_textarea_get_text(ui_SSID);
    const char *password = lv_textarea_get_text(ui_Password);

    // Ensure the UI elements are valid
    if (ssid == NULL || password == NULL) {
        ESP_LOGE(TAG, "SSID or Password text area is NULL");
        return;
    }

    // Proceed to attempt connection
    wifi_connect(ssid, password);
}
