/* main.c */

#define F_CPU 4000000UL

#include <avr/io.h>
#include <util/delay.h>

int main() {
        DDRB = 0xFF;

        while(1) {
                PORTB ^= 0xFF;
                _delay_ms(1000);
        }
        
        return 0;
}

