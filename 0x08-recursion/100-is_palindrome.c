#include "main.h"

/**
 * weigh - entry point
 * @a: index 1
 * @z: index 2
 * Return: 1 if palindrome is true, 0 if false
 */

int weigh(char *a, char *z)
{
	if (a >= z)
		return (1);
	if (*a == *z)
		return (weigh(a + 1, z - 1));

	return (0);
}

/**
 * _strlen - entry point
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (1 + (_strlen(s)));
}

/**
 * is_palindrome - entry point
 * @s: string
 * Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int len = _strlen(s);

	return (weigh(s, (s + len - 1)));
}
