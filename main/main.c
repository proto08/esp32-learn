#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h" 
#include "esp_log.h"

void app_main(void)
{
    printf("hello world\n");
    while (1) {
        printf("im alive\n");
        vTaskDelay(10000 / portTICK_PERIOD_MS);
    }
}