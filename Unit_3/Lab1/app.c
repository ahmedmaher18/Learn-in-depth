
#include "uart.h"
#include "stdio.h"
unsigned char str_buffer[100] = "Learn-in-depth-Ahmed";
unsigned char const str2_buffer[100] = "Learn-in-depth-Ahmed";

int main()
{
    Uart_Send_String(str_buffer);
}