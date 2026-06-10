#include "bsp.h"
#include "stm32l4xx_hal.h"
#include "gpio.h"

extern "C" void SystemClock_Config(void);

void Run(){
    HAL_Init();
    SystemClock_Config();
    MX_GPIO_Init();
    
    while (1)
    {
        HAL_GPIO_TogglePin(LED_RGB_R_GPIO_Port, LED_RGB_R_Pin);
        HAL_GPIO_TogglePin(LED_RGB_G_GPIO_Port, LED_RGB_G_Pin);
        HAL_GPIO_TogglePin(LED_RGB_B_GPIO_Port, LED_RGB_B_Pin);
        HAL_Delay(500);
    }
}