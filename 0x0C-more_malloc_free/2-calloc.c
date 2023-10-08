#include <stdlib.h>

/**
 * _calloc - Entry point
 * Description: allocates memory for an array using malloc.
 * @size: Given size of bytes
 * @nmemb: array
 * Return: NULL if size of nmemb is 0.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int z;
	char *q;

	if (nmemb == 0 || size == 0)
		return (NULL);
	q = malloc(nmemb * size);
	if (q == NULL)
		return (NULL);
	for (z = 0; z < nmemb * size; z++)
		*(q + z) = 0;
	return ((void *)q);
}
