#include <stdio.h>
/**
 * main-main entry point
 * Return: Always 0 if success
 */

int main(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{

		for (y = 0; y <= 9; y++)
		{
			if (x != y)
			{
				if (x > y)
				{
					continue;
				}
				putchar(x + '0');
				putchar(y + '0');
				if (x < 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
