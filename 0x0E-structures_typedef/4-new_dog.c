#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog- a function that creates a new dog.
 * @name: first paramater
 * @age:second paramater
 * @owner: third paramater
 * Return: the address to the new struct if suceess or NULL if not
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_Dog;
char *name_copy, *owner_copy;
unsigned int i;
name_copy = malloc(sizeof(*name));
owner_copy = malloc(sizeof(*owner));
if (name_copy == NULL)
{
free(name_copy);
return (NULL);
}
if (owner_copy == NULL)
{
free(owner_copy);
return (NULL);
}
new_Dog = malloc(sizeof(new_Dog));
if (new_Dog)
{
while (i < strlen(name))
{
name_copy[i] = name[i];
i++;
}
name_copy[i] = '\0';
i = 0;
while (i < strlen(owner))
{
owner_copy[i] = owner[i];
i++;
}
name_copy[i] = '\0';
new_Dog->name = name_copy;
new_Dog->age = age;
new_Dog->owner = owner_copy;
return (new_Dog);
}
free(name_copy);
free(owner_copy);
return (new_Dog);
}

