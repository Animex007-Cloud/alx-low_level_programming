#include "main.h"
#include <stdlib.h>

/**
 * free_grid - entry point
 * Description: A function that frees a 2 diamensional grid
 * @grid: to be freed
 * @height: of arrays
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
	free(grid);
}
