#include "main.h"

/**
 * _strspn - entry point
 * Description: print the number of byte in the initial segment
 * @s: initial segment
 * @accept: byte holder
 * Return: len
 */

unsigned int _strspn(char *s, char *accept)
{
	int y;
	int z;
	unsigned int len;

	len = 0;

	for (y = 0; s[y] != '\0'; y++)
	{
		for (z = 0; accept[z] != '\0' && accept[z] != s[y]; z++)
			;
		if (s[y] == accept[z])
			len++;
		if (accept[z] == '\0')
			return (len);
	}
	return (len);
}
