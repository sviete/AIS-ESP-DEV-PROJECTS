/*
 * AIS 2023
 *
 * step3-freertos
 */

#include <stdio.h>
#include <inttypes.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_chip_info.h"
#include "esp_flash.h"
#include "esp_system.h"
#include "freertos/task.h"



void task1(void *arg){
    while (1){
        printf("In task1 Loop...\n");
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}
void task2(void *arg){
    while (1){
        printf("In task2 Loop...\n");
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}
void task3(void *arg){
    while (1){
        printf("In task3 Loop...\n");
        vTaskDelay(1000 / portTICK_PERIOD_MS);
    }
}

void app_main(void)
{
    vTaskDelay(2000 / portTICK_PERIOD_MS);
    printf("\nHello freeRTOS world!\n");

    xTaskCreate( task1, "task1", 4096,  NULL,  10, NULL);
    xTaskCreate( task2, "task2", 4096,  NULL,  10, NULL);
    xTaskCreate( task3, "task3", 4096,  NULL,  10, NULL);
}