#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional
 * array of integers.
 *
 * @width: width input of the array
 * @height: height input of the array
 *
 * Return: NULL If width or height is 0 or negative,
 */
int **alloc_grid(int width, int height)
{
	int **alloc;
	int x, y;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	alloc = malloc(height * sizeof(int *));
	if (alloc == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		alloc[x] = malloc(width * sizeof(int));
		if (alloc[x] == NULL)
		{
			for (x--; x >= 0; x--)
				free(alloc[x]);
			free(alloc);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
		for (y = 0; y < width; y++)
			alloc[x][y] = 0;

	return (alloc);
}
