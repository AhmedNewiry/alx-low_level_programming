#include <stdio.h>

/**
 * main- is the entry point
 * @argc: is the lenght of argv arry
 * @argv:is the array of argument
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
int i = 0;
while (argc-- && argv[i])
{

i++;
}
printf("%d\n", i - 1);
return (0);
}
