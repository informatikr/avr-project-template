/* Blink LED on Arduino pin13 (Port B, Pin 7 of the AVR) */
 
#include <avr/io.h>
#include <util/delay.h> 


/* 
    Wait (100 * 160000) cycles = wait 16000000 cycles.
    Equivalent to 1 second at 16 MHz.
*/
void waitASecond(){
    uint16_t i;
    for (i=0; i<100; i++){
        /* wait (40000 x 4) cycles = wait 160000 cycles */
        _delay_loop_2(40000);
    }
}

int main (void){
    /* set PORTB PIN7 as output*/
    DDRB = (1<<DDB7);
    while (1){
        /* set PORTB PIN 7 high */
        PORTB |= (1<<PB7);
        waitASecond();
        /* set PORTB PIN7 low */
        PORTB &= ~(1<<PB7);
        waitASecond();
    }
    return 1;
}
