#include "variadic_functions.h"
/**
 * print_all- a function that prints anything.
 * @format:format list
 */
void print_all(const char * const format, ...)
{
int x = 0, i = 0;
char *sep = "", *s;
va_list ptr;
va_start(ptr, format);
while (format[i])
	i++;
while (format[x])
{
if (format[x + 1])
	sep = ", ";
if (x == (i - 1))
	sep = "";
switch (format[x])
{
case 'c':
printf("%c%s", va_arg(ptr, int), sep);
break;
case 'i':
printf("%d%s", va_arg(ptr, int), sep);
break;
case 'f':
printf("%f%s", va_arg(ptr, double), sep);
break;
case 's':
s = va_arg(ptr, char *);
if (!*s)
{
s = "(nil)";
}
printf("%s%s", s, sep);
break;
}
x++;
}
printf("\n");
}
