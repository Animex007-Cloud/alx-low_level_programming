#include "main.h"
#include <stdlib.h>

/**
 * array_range - Entry point
 *
 * Description: creates an array of integers from min to max.
 * @max: max integer in array
 * @min: min integer in array
 * Return: pointer to array or null.
 */

int *array_range(int min, int max)
{
	int *p;
	int z, size;

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
