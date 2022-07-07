#include "main.h"
/**
 * print_diagonal- prints diagonal line
 * @n: is the lenghth of the diagonal line
 */
void print_diagonal(int n)
{
int i;
int x;
if (n <= 0)
{
_putchar('\n');
}
for (i = 0; i <= n;  i++)
{
for  (x = 0; x <= i; x++)
{
_ putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
_putchar('\n');
}
