#include "main.h"
/**
 * more_numbers- prints more numbers
 */
void more_numbers(void)
{
int x;
int i;
for (i = '0'; i <= '9'; i++)
{
for (x = 0; x < 15  ; x++)
{
if (x > 9)
{
_putchar(x / 10 + '0');
}
_putchar(x % 10 + '0');
}
_putchar('\n');
}
_putchar('\n');
}

