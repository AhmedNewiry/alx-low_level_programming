#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 *main- entry point
 *
 * Return: Always (0)\
*/
/* betty style doc for function main goes there */
int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
int remainder = n % 10;
if (remainder > 5)
{
printf("Last digit of %i is %i and is greater than 5\n", n, remainder);
}
else if (remainder == 0)
{
printf("Last digit of %i is %i and is zero\n", n, remainder);
}
else if (remainder < 6 && != 0)
{
printf("Last digit of %i is %i and is zero\n", n, remainder);

}

return (0);
}
