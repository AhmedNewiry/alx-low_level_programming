#include <stdio.h>
/**
 * main- entry point
 * fizz_buzz: to check the number
 * Return: Always 0 (success)
 */
void fizz_buzz(void);
int main(void)
{
fizz_buzz();
putchar('\n');
return (0);
}

void fizz_buzz(void)
{
int x;
for (x = 1; x <= 100; x++)
{
if (x % 3 == 0 && x % 5 == 0)
{
printf("FizzBuzz ");
}
else if (x % 5 == 0)
{
printf("Buzz ");
}
else if (x % 3 == 0)
{
printf("Fizz ");
}
else
{
printf("%i ", x);
}
}
}
