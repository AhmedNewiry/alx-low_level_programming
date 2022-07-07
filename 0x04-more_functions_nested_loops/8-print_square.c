#include "main.h"

/**
 *
 * print_line- prints a diagonal line
 *
 * @size: is the size of the square
 *
 */

void print_square(int size)

{

int i;

int x;

if (size > 0)

{
for (i = 1; i <= size; i++)

{

for (x = 1; x <= size; x++)
{

_putchar('#');

}

_putchar('\n');

}

}

_putchar('\n');

}
