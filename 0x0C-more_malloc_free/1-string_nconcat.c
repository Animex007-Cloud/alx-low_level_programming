#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - entry point
 * Description: function that concatenates two strings
 * @s1: pointer one
 * @s2: pointer two
 * @n: declared int
 * Return: NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, total = 0;
	char *concatenated;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n  >= len2)
		n = len2;

	total = len1 + n + 1;
	concatenated = malloc(total);
	if (concatenated == NULL)
		return (NULL);

	strncpy(concatenated, s1, len1);
	strncat(concatenated, s2, n);
	concatenated[total - 1] = '\0';

	return (concatenated);
}
