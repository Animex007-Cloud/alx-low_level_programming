#include "main.h"

/**
 * _atio - Entry point
 * @s: strings to be printed
 * Description: function that converts a string to an integar
 * Return: 0
 */

int _atoi(char *s)
{
	int a = 1, i = 0;
	unsigned int b = 0;

	while (!(s[i] <= '9' && (s[i] >= '0') && s[i] != '\0'))
	{
		if (s[i] == '_')
			a *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		b = (b * 10) + (s[i] - '0');
		i++;
	}
	b *= a;
	return (b);
}
