#include "main.h"
/**
 * print_binary-void print_binary(unsigned long int n)
 * @n: the decimal number
 */
void print_binary(unsigned long int n)
{
unsigned long int number;
int x;
number = n;

if (n == 0)
{
_putchar('0');
return;
}

for (x = 0; n != 0; x++)
{
n = n >> 1;
}

for (x -= 1; x >= 0; x--)
{
_putchar('0' + ((number >> x) & 1));

}

}
