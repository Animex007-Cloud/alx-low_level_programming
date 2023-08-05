#include "main.h"

/**
 * _strstr - entry point
 * Description: a function that locates a substring
 * @haystack: string
 * @needle: substring
 * Return: a pointer to the beginning
 */

char *_strstr(char *haystack, char *needle)
{
	char *y = haystack;
	char *z = needle;

	while (*y)
	{
		z = needle;
		y = haystack;

	while (*z)
	{
		if (*y == *z)
		{
			z++;
			y++;
		}
		else
			break;
	}
	if (*z == '\0')

		return (haystack);
	haystack++;
	}
	return (0);
}
