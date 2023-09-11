#include <stdlib.h>
#include "main.h"
/**
 * free_grid - a function that frees a 2 dimensional grid previously
 * created by your alloc_grid function.
 *
 * @grid: 2d input of int
 * @height: height of grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
		grid[x] = NULL;
	}
	free(grid);
}
