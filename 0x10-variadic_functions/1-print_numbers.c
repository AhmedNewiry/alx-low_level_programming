#include "variadic_functions.h"
/**
 * print_numbers-a function that prints numbers, followed by a new line.
 * @separator: separator
 * @n:the number of optinal params
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ptr;
if (n == 0)
{
return;
}

va_start(ptr, n);
for (i = 0; i < n; i++)
{
printf("%i", va_arg(ptr, int));
if (*separator && i != (n - 1))
{
_putchar(*separator);
}
}
_putchar('\n');
va_end(ptr);

}
