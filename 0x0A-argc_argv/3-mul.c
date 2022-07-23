#include <stdio.h>
#include <stdlib.h>

/**
 * main- is the entry point
 * @argc: is the lenght of argv arry
 * @argv:is the array of argument
 * Return: 0 if success
 */
int main(int argc, char *argv[])
{

if (argc == 3)
{
printf("%i\n", atoi((argv[argc - 1])) * atoi((argv[argc - 2])));

return (0);

}
printf("%s\n", "Error");
return (1);


}
