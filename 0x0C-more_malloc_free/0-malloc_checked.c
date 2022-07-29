#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked-allocates memory using malloc.
 * @b: determines the memory size
 * Return- memory pointer if success or 98 if fails
 */
void *malloc_checked(unsigned int b)
{
int *mem = malloc(b);
if (mem)
{
return (mem);
}
exit(98);


}
