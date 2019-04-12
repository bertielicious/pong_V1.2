#include "config.h"
#include "send_spi_byte.h"
void lcdWrite(uchar byte, uchar status)
{
    DC = status;
    CE = LOW;
    send_spi_byte(byte);
    CE = HIGH;
}
