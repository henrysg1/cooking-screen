#include <time.h>
#include <sys/time.h>
#include "ui/ui.h"  // Your generated UI header
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_log.h"
#include "esp_sntp.h"

// Declare the functions from main.c
extern bool example_lvgl_lock(int timeout_ms);
extern void example_lvgl_unlock(void);

static const char *TAG = "ClockApp";

void updateClockTask(void *pvParameters) {
    time_t now;
    struct tm timeinfo;
    
    // Wait for time synchronization with NTP (could take a moment)
    int retry = 0;
    const int retry_count = 10;  // Retry up to 10 times (20 seconds)
    while (retry < retry_count) {
        time(&now);
        localtime_r(&now, &timeinfo);

        // Check if the time has been set (tm_year should be greater than 1970)
        if (sntp_get_sync_status() == SNTP_SYNC_STATUS_COMPLETED) {
            ESP_LOGI(TAG, "Time synchronized successfully.");
            break;
        }

        ESP_LOGI(TAG, "Waiting for NTP time sync... (retry %d)", retry + 1);
        retry++;
        vTaskDelay(2000 / portTICK_PERIOD_MS);  // Wait 2 seconds before retrying
    }

    if (retry == retry_count) {
        ESP_LOGE(TAG, "NTP synchronization failed!");
        if (example_lvgl_lock(-1)) {
            _ui_label_set_property(ui_Status, _UI_LABEL_PROPERTY_TEXT, "NTP Sync Failed!");
            example_lvgl_unlock();
        }
        vTaskDelete(NULL);  // Terminate task if NTP sync fails
        return;
    }

    // Main clock update loop
    while (true) {
        // Get current time
        time(&now);
        localtime_r(&now, &timeinfo);
        
        // Update the clock display
        char timeString[16];
        strftime(timeString, sizeof(timeString), "%H:%M", &timeinfo);
        if (example_lvgl_lock(-1)) {
            _ui_label_set_property(ui_StartClock, _UI_LABEL_PROPERTY_TEXT, timeString);
            example_lvgl_unlock();
        }

        // Determine greeting message
        const char* greeting;
        if (timeinfo.tm_hour < 12) {
            greeting = "Good morning";
        } else if (timeinfo.tm_hour < 18) {
            greeting = "Good afternoon";
        } else {
            greeting = "Good evening";
        }
        if (example_lvgl_lock(-1)) {
            _ui_label_set_property(ui_Welcome, _UI_LABEL_PROPERTY_TEXT, greeting);
            example_lvgl_unlock();
        }

        vTaskDelay(1000 / portTICK_PERIOD_MS);  // Update every second
    }
}
