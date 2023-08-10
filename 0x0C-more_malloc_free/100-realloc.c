#include "main.h"
#include <stdlib.h>

/**
 * _realloc - entry point
 * Description: function that reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: allocated size
 * @new_size: new size
 * Discription: function that reallocates a memory block using malloc and free
 * Return: pointer to new allocated or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned char *p;
	unsigned int z;

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
	p = malloc(new_size * sizeof(char));
	if (p == NULL)
		return (NULL);
	z = 0;

	if (new_size > old_size)
	{
		while (z < old_size)
		{
			p[z] = ((char *)ptr)[z];
			z++;
		}
		free(ptr);
		return (p);
	}
	while (z < new_size)
	{
		p[z] = ((char *)ptr)[z];
		z++;
	}
	free(ptr);
	return (p);
}
