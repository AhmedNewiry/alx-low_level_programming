#ifndef DOG_H
#define DOG_H
/**
 * struct dog- dog structure
 * @name: first member
 * @owner: second member
 * @age: third member
 */

struct dog
{
char *name;
char *owner;
float age;

};

typedef struct dog dog_t;
int _putchar(int c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
