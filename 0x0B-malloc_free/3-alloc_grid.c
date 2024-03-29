#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * alloc_grid- function that returns a pointer to a 2 D array of integers.
 * @width: 2D array rows
 * @height: 2D array columns
 * Return: pointer to the first element if success and NULL if not
 */

int **alloc_grid(int width, int height)
{

int i;
int x;
int **twoD;
int **twoDarray = NULL;

if (width <= 0 || height <= 0)
{
return (NULL);
}
twoDarray = malloc(height * sizeof(int *));
if (twoDarray)
{
for (i = 0; i < height; i++)
{
twoDarray[i] = malloc(width * sizeof(int));
if (twoDarray[i] == NULL)
{
for (--i; i >= 0; i--)
{
free(twoDarray);
}
free(twoDarray);
return (NULL);
}
else
{
for (x = 0; x < width; x++)
{
twoDarray[i][x] = 0;
}
}
}
twoD = twoDarray;
for (--i; i >= 0; i--)
{
free(twoDarray);
}
return (twoD);
}
free(twoDarray);
return (NULL);

}
