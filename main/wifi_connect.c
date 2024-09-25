#include "wifi_connect.h"
#include "time_display.h"
#include "lvgl.h"
#include "esp_log.h"
#include "ui/ui.h"
#include <stdlib.h>  // For malloc
#include "esp_sntp.h"

#define DEFAULT_SCAN_LIST_SIZE 10

// Declare the functions from main.c
extern bool example_lvgl_lock(int timeout_ms);
extern void example_lvgl_unlock(void);


static const char *TAG = "example";

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

    esp_wifi_set_mode(WIFI_MODE_STA);
    esp_wifi_set_config(ESP_IF_WIFI_STA, &wifi_config);
    esp_wifi_start();

    wifi_scan();
}

void wifi_scan(void) {
    uint16_t number = DEFAULT_SCAN_LIST_SIZE;
    wifi_ap_record_t ap_info[DEFAULT_SCAN_LIST_SIZE];
    uint16_t ap_count = 0;
    memset(ap_info, 0, sizeof(ap_info));

    esp_wifi_scan_start(NULL, true);
    esp_wifi_scan_get_ap_records(&number, ap_info);
    esp_wifi_scan_get_ap_num(&ap_count);
    ESP_LOGI(TAG, "Total APs found: %u", ap_count);

    for (int i = 0; i < ap_count; i++) {
        ESP_LOGI(TAG, "SSID \t\t%s", ap_info[i].ssid);
        // You can also update your UI to display the available SSIDs
    }
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
