
#include <pic16f1459.h>
#include "config.h"
void init_spi(void)
{
    SSPCON1bits.WCOL = LOW;
    SSPCON1bits.SSPOV = LOW;
    SSPCON1bits.SSPEN = HIGH;   // Enables serial port and configures SCK, SDO, SDI and SS as the source of the serial port pins
    SSPCON1bits.CKP = LOW;      // idle state for clock is low
    SSPCON1bits.SSP1M3 = LOW;    // 0001 = SPI Master mode, clock = FOSC/16 
    SSPCON1bits.SSP1M2 = LOW;
    SSPCON1bits.SSP1M1 = LOW;
    SSPCON1bits.SSP1M0 = HIGH;
    SSP1STATbits.CKE = LOW;
    SSP1STATbits.SMP = HIGH;    // input data sampled at end of output data
    SSP1STATbits.BF = LOW;
}
