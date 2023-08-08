#include "main.h"
#include <stdlib.h>

/**
 * create_array - entry point
 * Description: Function thta creates an array of char,
 * and initialize it with special char
 * @c: string
 * @size: size of given array
 * Return: pointer to array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int a;

	if (size == 0)
		return (NULL);
	str = malloc(sizeof(char) * size);
	if (str == NULL)
		return (NULL);
	a = 0;
	while (a < size)
	{
		str[a] = c;
		a++;
	}
	return (str);
}
