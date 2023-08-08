#include "main.h"
#include <stdlib.h>

/**
 * _strdup - entry point
 * Description: function that returns pointer to a newly allocated space
 * of memory, whic contains a copy of the string
 * @str: pointer
 * Return: NULL if str = NULL
 */

char *_strdup(char *str)
{
	char *s;
	int a, b;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;
	s = malloc(sizeof(*str) * a);
	if (s == NULL)
		return (NULL);
	b = 0;
	while (str[b] != '\0')
	{
		s[b] = str[b];
		b++;
	}
	return (s);
}
