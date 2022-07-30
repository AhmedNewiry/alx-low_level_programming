#include <stdio.h>
#include <stdlib.h>
/**
 * main- entry point
 * @argc: number of command line arguments
 * @argv: command line arguments
 * Return: 0 if sucess 
 */
int main(int argc, char **argv)
{
if (argc == 3)
{
printf("%i", atoi(argv[1]) * atoi(argv[2]));
return (0);
}
printf("Error");
exit(98);

}
