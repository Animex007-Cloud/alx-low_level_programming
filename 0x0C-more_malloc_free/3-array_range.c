#include "main.h"
#include <stdlib.h>

/**
 * array_range - entry point
 * Description: function that creates an array of integers
 * @min: value holder
 * @max: value holder two
 * Return: NULL
 */

int *array_range(int min, int max)
{
	int z, size;
	int *p;

	if (min > max)
		return (NULL);
	size = (max - min) + 1;
	p = malloc(size * sizeof(*p));
	if (p == NULL)
		return (NULL);
	for (z = 0; z < size && min <= max; z++, min++)
		*(p + z) = min;
	return (p);
}

