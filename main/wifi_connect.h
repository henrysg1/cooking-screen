#ifndef WIFI_CONNECT_H
#define WIFI_CONNECT_H

#include "esp_wifi.h"
#include "esp_event.h"
#include "esp_log.h"
#include "freertos/event_groups.h"
#include "lvgl.h"

// Function prototypes
void wifi_init(void);
void wifi_scan(void);
void wifi_connect(const char* ssid, const char* password);
void on_connect_button_click(lv_event_t * e);


#endif // WIFI_CONNECT_H
