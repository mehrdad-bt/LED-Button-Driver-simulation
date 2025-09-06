#include <stdio.h>
#include "led.h"



void Led_init(LED_t *led)
{
    led->L_state = LED_OFF;
}

void Led_on(LED_t *led)
{
    led->L_state = LED_ON;
}

void Led_off(LED_t *led)
{
    led->L_state = LED_OFF;
}
void Led_toggle(LED_t *led)
{
    if(led->L_state == LED_OFF)
    {
        led->L_state = LED_ON;
        return;
    }
    else if(led->L_state == LED_ON)
    {
        led->L_state = LED_OFF;
        return;
    }
}

void Led_print(LED_t *led)
{
    if(led->L_state == LED_ON)
    {
        printf("Led status = ON\n"); 
    }
    else
    {
        printf("Led status = OFF\n");        
    }
    
}

