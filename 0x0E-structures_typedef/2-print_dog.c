#include "dog.h"
#include <stdio.h>
/**
 * print_dog- a function that prints a struct dog
 * @d:the structure name
 */
void print_dog(struct dog *d)
{
d->name?(printf("Name:%s\n",d->name)):(printf("(nil)\n"));
d->owner?(printf("%s\n",d->owner)):(printf("(nil)\n"));
d->age?(printf("%f\n",d->age)):(printf("(nil)\n"));
}
