#include "main.h"
#include <stdlib.h>

/**
 * create_array - Entry point
 * @size: size of the given array.
 * @c: char to be int
 *
 * Description: A finction that creates an array of chars.
 * Return: pointer to array or NULL
 */

char *create_array(unsigned int size, char c)
{
	char *st;
	unsigned int z;

	if (size == 0)
		return (NULL);
	st = malloc(sizeof(char) * size);
	if (st == NULL)
		return (NULL);
	z = 0;
	while (z < size)
	{
		st[z] = c;
		z++;
	}
	return (st);
}
