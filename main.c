#include <stdio.h>
#include "led.h"
#include "button.h"




int main(){

    int user_input = 0;
    LED_t led;
    Button_t Button;

    Led_init(&led);
    Button_init(&Button);

    while(user_input != 4)
    {
        printf("please Enter:\n1 = press button\n2 = release button\n3 = show led state\n4 = exit\n");
        scanf(" %d", &user_input);

        if(user_input >= 1 && user_input <= 4)
        {
            if(user_input == 3)
            {
                Led_print(&led);
            }

                Button_update(&Button, user_input);
            
            if(Button_Getstate(&Button) == BUTTON_PRESSED && user_input != 3)
            {
                Led_toggle(&led);
            }


        }





    }


    

    return 0;
}