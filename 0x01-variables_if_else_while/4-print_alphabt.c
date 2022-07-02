#include <stdio.h>
/**
 *main- entry point
 *
 *Return: Always 0 (success)
 */
int main(void)
{
int alpha = 'a';
while (alpha <= 'z')
{
if (alpha == 'e' || alpha == 'q')
{
alpha = alpha + 1;
continue;
}
putchar(alpha);
alpha++;
}
putchar('\n');
return (0);
}
