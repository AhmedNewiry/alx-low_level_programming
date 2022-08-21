#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	int fir;

	for (fir = '0'; fir <= '9'; fir++)
	{
		putchar(fir);
		if (fir < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

