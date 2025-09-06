typedef enum
{
    BUTTON_PRESSED,
    BUTTON_RELEASED,
    
}ButtonState_t;

typedef struct Button_t{

    ButtonState_t B_state;
}Button_t;

void Button_init(Button_t *);
void Button_update(Button_t*, int);
ButtonState_t Button_Getstate(Button_t*);
