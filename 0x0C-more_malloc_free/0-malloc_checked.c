#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked-allocates memory using malloc.
 * @b: determines the memory size
 * return- memory pointer if success or 98 if fails
 */
void *malloc_checked(unsigned int b)
{
int *mem = malloc(sizeof *mem * b);
if (*mem)
{
return (mem);
}
return (98);


}
