#include "led.h"
#include "stm32f4xx_hal.h"
#include "stm32f4xx_hal_gpio.h"

#define LED_IO_PORT  GPIOA
#define LED_PIN0 GPIO_PIN_6
#define LED_PIN1 GPIO_PIN_7

void led_on(char index){
    HAL_GPIO_WritePin(LED_IO_PORT, LED_PIN0,GPIO_PIN_RESET);
    HAL_GPIO_WritePin(LED_IO_PORT, LED_PIN1,GPIO_PIN_SET);
}

void led_off(char index){

}
