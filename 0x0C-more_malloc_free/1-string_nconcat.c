#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Entry point
 *
 * Description: Concatenate two strings together.
 * @s1: first string
 * @s2: second string
 * @n: value
 *
 * Return: points to a new allocated space in memmory, which contains s1
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int y;
	unsigned int z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	y = 0;
	while (s1[y] != '\0')
		y++;
	p = malloc(sizeof(char) * (y + n + 1));
	if (p == NULL)
		return (NULL);
	y = z = 0;
	while (s1[y] != '\0')
	{
		p[y] = s1[y];
		y++;
	}
	while (z < n && s2[z] != '\0')
	{
		p[y] = s2[z];
		y++, z++;
	}
	p[y] = '\0';
	return (p);
}
