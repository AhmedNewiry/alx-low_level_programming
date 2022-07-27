#include "main.h"
#include <stdlib.h>
/**
 * free_grid- a function that frees a 2 dimensional array
 * @grid: the pointer to the 2D array
 * @height: number of columns
 */
void free_grid(int **grid, int height)
{
int x;
for (x = 0; x < height; x++)
{
free(grid[x]);
}
free(grid);
}
