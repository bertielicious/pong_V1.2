
#include <pic16f1459.h>
#include "config.h"
void send_spi_byte (uchar eight_bits)
{
    SSP1BUFbits.SSPBUF = eight_bits;
    while(SSPSTATbits.BF == 0)
    {
        ;
    }
}
