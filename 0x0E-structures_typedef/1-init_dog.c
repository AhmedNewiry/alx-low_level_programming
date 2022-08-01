#include "dog.h"
/**
 * init_dog- a function that initialize a variable of type struct dog
 * @d: the name of the structure
 * @name:the first member
 * @age: the second member
 * @owner: the third member
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->owner = owner;
d->age = age;
}
}
