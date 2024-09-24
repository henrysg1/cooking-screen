#include <time.h>
#include <sys/time.h>
#include "ui/ui.h"  // Your generated UI header
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

void updateClockTask(void *pvParameters) {
    while (true) {
        // Get current time
        time_t now;
        struct tm timeinfo;
        time(&now);
        localtime_r(&now, &timeinfo);
        
        // Update the clock display
        char timeString[16];
        strftime(timeString, sizeof(timeString), "%H:%M", &timeinfo);
        _ui_label_set_property(ui_StartClock, _UI_LABEL_PROPERTY_TEXT, timeString);

        // Determine greeting message
        const char* greeting;
        if (timeinfo.tm_hour < 12) {
            greeting = "Good morning";
        } else if (timeinfo.tm_hour < 18) {
            greeting = "Good afternoon";
        } else {
            greeting = "Good evening";
        }
        _ui_label_set_property(ui_Welcome, _UI_LABEL_PROPERTY_TEXT, greeting);

        vTaskDelay(1000 / portTICK_PERIOD_MS);  // Update every second
    }
}
