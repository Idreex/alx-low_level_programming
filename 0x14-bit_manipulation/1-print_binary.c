#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: number in decimal to be printed in binary
 */

void print_binary(unsigned long int n)
{
        if (n == 0)
                _putchar('0');
        else
        {
                if (n >> 1)
                {
                        print_binary(n >> 1);
                }
                _putchar((n & 1) + '0');
        }

}
~
~
"1-print_binary.c" 21L, 301C 
