#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - entry point
 * @width: grid width
 * @height: grid height
 * Description: function that returns a pointer to a 2 diamensional array
 * of integers
 * Return: grid success or NULL at failure.
 */

int **alloc_grid(int width, int height)
{
	int **grid, y, z;

	if (width < 1 || height < 1)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	for (y = 0; y < height; y++)
	{
		grid[y] = malloc(sizeof(int) * width);
		if (grid[y] == NULL)
		{
			while (--y >= 0)
				free(grid[y]);
			free(grid);
			return (NULL);
		}
	}
	for (y = 0; y < height; y++)
	{
		for (z = 0; z < width; z++)
			grid[y][z] = 0;
	}
	return (grid);
}
