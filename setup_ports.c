
#include <pic16f1459.h>
#include "config.h"
void setup_ports(void)
{
    ANSELA = 0x00;      // all ADC off
    ANSELB = 0x00;
    ANSELC = 0x00;  
    CM1CON0 = 0x00;     // all COMPARATORS off
    CM2CON0 = 0x00;
    CM1CON1 = 0x00;
    CM2CON1 = 0x00;
    TRISBbits.TRISB4 = LOW;   // override SPI functionality SDI as it is not needed
    TRISBbits.TRISB6 = LOW;   // SCK is an output pin 11
    TRISCbits.TRISC3 = LOW;   // RST is an output pin 7
    TRISCbits.TRISC4 = LOW;   // CE is an output pin 6
    TRISCbits.TRISC5 = LOW;   // debug GREEN LED
    TRISCbits.TRISC6 = LOW;   // DC is an output pin 8
    TRISCbits.TRISC7 = LOW;   // SDO is an output pin 9  
}
