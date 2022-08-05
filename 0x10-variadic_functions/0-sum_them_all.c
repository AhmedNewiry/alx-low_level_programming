#include "variadic_functions.h"
/**
 * sum_them_all-a function that returns the sum of all its parameters.
 * @n: the number of optional paramaters
 * Return: the sum of optional params or 0 if fail
 */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i;
unsigned int sum = 0;
if (n == 0)
{
return (0);
}

va_list ptr;
va_start(ptr, n);
for (i = 0; i < n; i++)
{
sum += va_arg(ptr, int);
}
va_end(ptr);
return (sum);
}
