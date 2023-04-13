#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - a function that returns a pointer to a 2 dimensional
 * array of integers. Each element of the grid should be initialized to 0
 * @width: the width of array
 * @height: the height of array
 * Return: a pointer to a 2 dimensional array of integers.
 * or NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int*) * height);
	if (grid == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		grid = malloc(sizeof(int) * width);
		if (grid == NULL)
			return (NULL);
		for (j = 0; j < width; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
