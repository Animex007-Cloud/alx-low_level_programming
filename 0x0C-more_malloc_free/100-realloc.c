#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Entry point
 * Description: Write a function that reallocates a
 * memory block using malloc and free
 *
 * @ptr: pointer
 * @old_size: size in byte to allocated space
 * @new_size: new size
 * Return: pointer to new allocated memory or null.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int z;
	unsigned char *x;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size * sizeof(void *));
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	x = malloc(new_size * sizeof(char *));
	if (x == NULL)
		return (NULL);
	z = 0;
	if (new_size > old_size)
	{
		while (z < old_size)
		{
			x[z] = ((char *)ptr)[z];
			z++;
		}
		free(ptr);
		return (x);
	}

	while (z < new_size)
	{
		x[z] = ((char *)ptr)[z];
		z++;
	}
	free(ptr);
	return (x);
}
