#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Entry point
 * @str: string to be copied
 *
 * Description: returns a pointer to a new allocation of space.
 * Return: pointer to array or NULL
 */

char *_strdup(char *str)
{
	char *s;
	int y, z;

	if (str == NULL)
		return (NULL);
	y = 0;
	while (str[y] != '\0')
		y++;
	y++;
	s = malloc(sizeof(*str) * y);
	if (s == NULL)
		return (NULL);
	z = 0;
	while (str[z] != '\0')
	{
		s[z] = str[z];
		z++;
	}
	return (s);
}
