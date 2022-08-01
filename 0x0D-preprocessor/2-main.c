#include <stdio.h>
#include <stdlib.h>
/**
 * main- the main entry point
 * @argc: the number of command line arguments
 * @argv: the command line arguments
 * Return: Always 0
 */
int main(int argc, char **argv)
{
if (argv && argc)
{
printf("%s\n", __FILE__);
}
return (0);
}
