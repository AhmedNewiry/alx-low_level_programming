#include "main.h"
/**
 * puts_half- prints half of the string
 * @str:the pointer to the first character
 */
void puts_half(char *str)
{

int length = 0;
int start;
while (*str)
{
str++;
length++;
}

if (!(length % 2))
{
start = (length - 1) / 2;
start++;
}
else
{
start = length / 2;
}

while (start <= (length / 2))
{
_putchar(*str);
str++;
start++;
}
}
