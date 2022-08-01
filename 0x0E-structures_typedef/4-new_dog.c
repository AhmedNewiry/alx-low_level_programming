#include "dog.h"
#include <stdlib.h>
/**
 * new_dog- a function that creates a new dog.
 * @name: first paramater
 * @age:second paramater
 * @owner: third paramater
 * Return: the address to the new struct if suceess or NULL if not
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
new_dog = malloc(sizeof(new_dog));
if (new_dog)
{
new_dog->name = name;
new_dog->age = age;
new_dog->owner = owner;
return (new_dog);
}
return (new_dog);
}

