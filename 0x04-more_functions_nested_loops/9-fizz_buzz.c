#include <stdio.h>
/**
 * *main- entry point
 * *Return: Always 0 (success)
 * */
void fizz_buzz(void);
int main (void)
{
fizz_buzz();
putchar('\n');
}

void fizz_buzz(void)
{
int x;
for (x =0; x <= 100; x++)
{
if (x % 3 == 0)
{
printf("Fizz ");
}
else if (x % 5 == 0)
{
printf("Buzz ");
}
else if (x % 5 == 0 && x % 3 == 0)
{
printf("FizzBuzz ");
}
else
{
printf("%i ", x);
}

}
}
