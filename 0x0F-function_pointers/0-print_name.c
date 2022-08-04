#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name-a function that prints a name.
 * @name: the string to be printed
 * @f:pointer to a function
 */

void print_name(char *name, void (*f)(char *))
{
if (name != NULL || f != NULL)
{
f(name);
}
return;
}