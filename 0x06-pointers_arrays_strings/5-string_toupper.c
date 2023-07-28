#include "main.h"

/**
 * string_toupper - entry point
 *
 * Description: print to uppercase
 * @s: strings
 * Return: strings to uppercase
 */

char *string_toupper(char *s)
{
	int z = 0;

	for (z = 0; s[z] != '\0'; z++)
	{
		if (s[z] >= 'a' && s[z] <= 'z')
			s[z] = s[z] - 'a' + 'A';
	}
	return (s);
}
