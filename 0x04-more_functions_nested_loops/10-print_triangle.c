#include "main.h"
/**
 *
 * print_line- prints a triangle
 *
 * @size: is the size of the triangle
 *
 */
void print_triangle(int size)
{
int i;
int x;
if (size > 0)
{
for (i = 1; i < size; i++)
{
for (x = size-1; x > i; x--)
{
_putchar(' ');
}
for (x = 0; x <= i; x++)
{
_putchar('#');
}
_putchar('\n');
}
}
if (size <= 0)
{
_putchar('\n');
}
}
