typedef enum
{
    LED_OFF,
    LED_ON,
    LED_BLINK
}LedState_t;

typedef struct LED_t{
    
    LedState_t L_state;
}LED_t;

void Led_init(LED_t*);
void Led_on(LED_t*);
void Led_off(LED_t*);
void Led_toggle(LED_t*);
void Led_print(LED_t*);
