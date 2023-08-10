#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - entry point
 * Description: function that allocates memory for an array using malloc
 * @nmemb: array
 * @size: size of byte
 * Return: 0 or null depending on outcome
 */

void *_calloc(unsigned int nmemb, unsigned int size);
{
	unsigned int z;
	char *y;

	if (nmemb == 0 || size == 0)
		return (NULL);
	y = malloc(nmemb * size);
	if (y == NULL)
		return (NULL);
	for (z = 0; z < nmemb * size; z++)
		*(y + z) = 0;
	return ((void *)c);
}
