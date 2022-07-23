#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/**
 * main- is the entry point
 * @argc: is the lenght of argv arry
 * @argv:is the array of argument
 * Return: 0 if success
 */
int main (int argc, char *argv[])
{
int symbol = 0;
int sum = 0;
int i;
for (i = 0; i < argc; i++)
{
if (46 > (*argv[i]) || (*argv[i]) > 57)
{
symbol++;
}
}
if (symbol)
{
printf("Error\n");
return (1);
}
else if (argc > 1)
{
while (argc--)
{
sum = sum + atoi(argv[argc]);
}
printf("%i\n", sum);
}
return (0);
}



