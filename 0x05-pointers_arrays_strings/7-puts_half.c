#include "main.h"
/**
 * puts_half- prints half of the string
 * @str:the pointer to the first character
 */
void puts_half(char *str)
{
char *ptr = str;
int length = 0;
int start;
while (*str)
{
str++;
length++;
}
str = ptr;

if (!(length % 2))
{
start = (length - 1) / 2;


}
else
{
start = length / 2;

}


while (start < length)
{
_putchar(str[start]);
start++;

}
_putchar('\n');
}

