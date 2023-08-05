#include "main.h"
#define NULL 0

/**
 * _strchr - entry point
 * Description: function that locates a character
 * @s: copied string
 * @c: string
 * Return: a pointer to character
 */

char *_strchr(char *s, char c)
{
	int z = 0;

	while (s[z] != '\0' && s[z] != c)
		z++;

	if (s[z] == c)
		return (&s[z]);
	else
		return (NULL);
}
