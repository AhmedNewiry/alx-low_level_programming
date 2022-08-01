#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog- a function that prints a struct dog
 * @d:the structure name
 */
void print_dog(struct dog *d)
{
d->name ? (printf("Name: %s\n", d->name)) : (printf("Name: (nil)\n"));
d->age >= 0 ? (printf("Age: %f\n", d->age)) : (printf("Age: (nil)\n"));
d->owner ? (printf("Owner: %s\n", d->owner)) : (printf("Owner: (nil)\n"));

}
