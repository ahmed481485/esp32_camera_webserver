#include "http_server.h"
#include "camera_manager.h"
#include "wifi_manager.h"
#include "esp_log.h" 
#include "esp_camera.h"
#include <nvs_flash.h>

void app_main(void)
{
#if ESP_CAMERA_SUPPORTED
    if(ESP_OK != camera_init()) {
        return;
    }
    nvs_flash_init();   
    wifi_init_sta();
    start_webserver();
#else
    ESP_LOGE(TAG, "Camera support is not available for this chip");
    return;
#endif
}
