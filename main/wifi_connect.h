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
void save_wifi_credentials(const char* ssid, const char* password);
bool load_wifi_credentials(char* ssid, size_t ssid_size, char* password, size_t password_size);


#endif // WIFI_CONNECT_H
