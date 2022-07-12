#include <stdio.h>
#include "main.h"
/**
 * print_array- prints n numbers of array elements
 * @a:the address of the first element of the array
 * @n:the number of array elements
 */
void print_array(int *a, int n)
{
int index;
for (index = 0; index < n; index++)
{
printf("%i",a[index]);
if (index != (n -1) )
{
_putchar(',');
}

_putchar(' ');
}
_putchar('\n');
}
