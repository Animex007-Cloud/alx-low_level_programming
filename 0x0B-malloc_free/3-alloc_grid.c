#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Entry point
 * @width: width of the grid
 * @height: height of the grid
 *
 * Description: prints a 2 Dimensional array of integers.
 *
 * Return: grid at Success or Null at failure.
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
