#include "main.h"
#include <stdlib.h>
/**
 * free_grid - prints a grid of integer
 * @height: height of the grid
 * @grid: the address of the two dimensional grid
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
int i;
for (i = 0; i < height; i++)
{
if (grid[i] != NULL)
{
free(grid[i]);
}
}
free(grid);
}
