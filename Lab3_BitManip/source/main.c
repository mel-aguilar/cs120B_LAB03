/* Author: magui051
* Partner(s) Name: 
* Lab Section:
* Assignment: Lab # Exercise #
* Exercise Description: [optional - include for your own benefit]
*
* I acknowledge all content contained herein, excluding template or example
* code, is my own original work.
*/

#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
    DDRA = 0x00; PORTA = 0xFF; //input 
    DDRB = 0xFF; PORTB = 0x00; //output
    DDRC = 0xFF; PORTC = 0x00; //output

    unsigned char inputA = 0x00;
 
    while(1) {
       PORTB = (PINA >> 4) | 0x0;
       PORTC = (PINA << 4);     
    }
    return 1;
 }

  /* Insert your solution below */

