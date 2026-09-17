idf_component_register(SRCS main.c camera_manager.c http_server.c wifi_manager.c
                        PRIV_INCLUDE_DIRS .
                        PRIV_REQUIRES nvs_flash esp_psram esp_wifi esp_netif esp_event esp_http_server esp_timer) 
