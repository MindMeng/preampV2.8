#include <xc.h>
#include "config.h"
#include "send_spi_byte.h"
#include "write_data.h"
void write_data(unsigned char data) 
{
    CS = 0;
    DC = 1;
    send_spi_byte(data);
    CS = 1;
}
