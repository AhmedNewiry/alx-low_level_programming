#include "variadic_functions.h"

/**
 * print_strings-a function that prints strings, followed by a new line.
 * @separator: the string separator
 * @n: the number of optional params
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list ptr;
va_start(ptr, n);
for (i = 0; i < n; i++)
{
if (va_arg(ptr,char *) == NULL)
{
printf("(nil)");
}
printf("%s", va_arg(ptr, char *));
if (separator && i != (n - 1))
{
printf("%s", separator);
}
}
printf("\n");
va_end(ptr);
}
