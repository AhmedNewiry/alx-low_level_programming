#include "main.h"
/**
 * puts_half- prints half of the string
 * @str:the pointer to the first character
 */
void puts_half(char *str)
{
int num1 = 0;
int num2 = 0;
int num3 = 0;
int num4 = 0;
int num5 = 0;
while (*str)
{
num1++;
str++;
}

num2 = num1 / 2;
while (num2 <= num1)
{
str--;
num2++;
}


num4 = num1 % 2;
if (num4 != 0)
{
num3 = (num1 - 1) / 2;
num3++;
while (num3 <= num1)
{
_putchar(*str);
num3++;
str++;
}

}
num5 = num1 / 2;
while (num5 <= num1)
{
_putchar(*str);
num3++;
str++;
}

}
