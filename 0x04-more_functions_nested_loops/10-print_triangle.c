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
for (i = size; i <= 0; i--)
{
for (x = 1; x <= i; x++)
{
_putchar(' ');
}
for (x = 1; x <= i; x++)
{
_putchar('#');
}
_putchar('\n');
}
}
_putchar('\n');
}
