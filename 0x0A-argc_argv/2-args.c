#include <stdio.h>

/**
 *main- is the entry point
 *@argc: is the lenght of argv arry
 *@argv:is the array of argument
 *Return: 0 if success
 */
int main(int argc, char **argv)
{
int i = 0;
while(argc--)
{
printf("%s\n", argv[i]);
i++;
}
return (0);
}
