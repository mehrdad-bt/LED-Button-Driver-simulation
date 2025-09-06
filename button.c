#include <stdio.h>
#include "Button.h"




void Button_init(Button_t *Button)
{

    Button->B_state = BUTTON_RELEASED;

}

void Button_update(Button_t *Button, int user_input)
{

    switch(Button->B_state)
    {
        case BUTTON_PRESSED:
        {

            if(user_input == 2)
            {
                Button->B_state = BUTTON_RELEASED;
                printf("Button Released!\n");
            }

        }
        break;


        case BUTTON_RELEASED:
        {
            if(user_input == 1)
            {
                Button->B_state = BUTTON_PRESSED;
                printf("Button Pressed\n");
            }


        }
        break;

    }


}


ButtonState_t Button_Getstate(Button_t *Button){

    return Button->B_state;

}