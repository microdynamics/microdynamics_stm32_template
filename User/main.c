#include "stm32f10x_driver_delay.h"
#include "stm32f10x_module_led.h"

int main(void)
{
    Delay_Init();
    LED_Init();

    while (1)
    {
        LED0 = 0;
        Delay_TimeMs(5000);
        LED0 = 1;
        Delay_TimeUs(5000);
    }

    return 0;
}
