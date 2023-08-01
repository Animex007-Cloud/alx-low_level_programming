#include "main.h"
#define NULL 0

/**
 * _strpbrk - entry point
 * Description: function that search for a string
 * @s: declared string
 * @accept: bytes
 *
 * Return: to pointer
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int y;
	unsigned int z;

	for (y = 0; s[y] != '\0'; y++)
	{
		for (z = 0; accept[z] != '\0'; z++)
		{
			if (s[y] == accept[z])
				return (&s[y]);
		}
	}
		return (NULL);
}
