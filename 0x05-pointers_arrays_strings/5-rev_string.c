#include "main.h"

/**
 * _strlen - Entry point
 *
 * Description: return length of string
 *
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * rev_string - Entry point
 * Description: reverses a string
 *
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int y = 0;
	int z = (_strlen(s) - 1);
	char revs;

	while (y < z)
	{
		revs = s[y];
		s[y] = s[z];
		s[z] = revs;
		y++, z--;
	}
}
