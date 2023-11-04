#include <stdio.h>
#include <freertos/FreeRTOS.h>
#include <freertos/task.h>

void app_main(void){
    printf("hi\n");

    vTaskDelay(10 / portTICK_PERIOD_MS);

    printf("ho\n");

}
