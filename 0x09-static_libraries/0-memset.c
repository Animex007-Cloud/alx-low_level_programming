#include "main.h"

/**
 * _memset - entry point
 * Descriptoin: function that fills memory with a constant byte
 * @s: char one
 * @b: char two
 * @n:Declared int
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
