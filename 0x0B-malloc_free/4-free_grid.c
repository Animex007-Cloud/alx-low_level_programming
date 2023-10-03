#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Entry point
 * @grid: pointer to array of integer
 * @height: height of 2D array
 *
 * Description: A function that print a 2D dimensional array of integers.
 * Return: nothing.
 */

void free_grid(int **grid, int height)
{
	int z;

	for (z = 0; z < height; z++)
		free(grid[z]);
	free(grid);
}
