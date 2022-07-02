#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always
 */
int main(void)
{
int alpha;
int num;
for (num = '0'; num <= '9'; num++)
{
putchar(num);
}
for (alpha = 'a'; alpha <= 'f'; alpha++)
{
putchar(alpha);
}
putchar('\n');
return (0);
}
