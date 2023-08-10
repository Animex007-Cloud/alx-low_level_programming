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
	int y;
	unsigned int z;
	char *con;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	y = 0;
	while (s1[y] != '\0')
		y++;
	con = malloc(sizeof(char) * (y + n + 1));
	if (con == NULL)
		return (NULL);
	y = z = 0;

	while (s1[y] != '\0')
	{
		con[y] = s1[y];
		y++;
	}

	while (z < n && s2[z] != '\0')
	{
		con[y] = s2[z];
		y++, z++;
	}
	con[y] = '\0';
	return (con);
}
