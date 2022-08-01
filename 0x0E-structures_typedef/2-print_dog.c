#include "dog.h"
#include <stdio.h>
/**
 * print_dog- a function that prints a struct dog
 * @d:the structure name
 */
void print_dog(struct dog *d)
{
int x;
if (d)
{
for (x = 0; x < 3; x++)
{
if (!d[0])
{
printf("Name:(nil)");
}
else if (!d[x])
{
printf("(nil)");
}
else
{

printf("%d",d[x]);

}
}
}
}
return;

}
