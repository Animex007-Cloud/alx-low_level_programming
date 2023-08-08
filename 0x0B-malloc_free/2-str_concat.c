#include "main.h"
#include <stdlib.h>

/**
 * str_concat - entry point
 * Description: function that concatenates two strings
 * @s1: pointer one
 * @s2: pointer two
 * Return: combined string
 */

char *str_concat(char *s1, char *s2)
{
	char *s;
	int y, z;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	y = z = 0;

	while (s1[y] != '\0')
		y++;
	while (s2[z] !='\0')
		z++;

	s = malloc(sizeof(char) * (y + z + 1));

	if (s == NULL)
		return (NULL);

	y = z = 0;

	while(s1[y] != '\0')
	{
		s[y] = s1[y];
		y++;
	}
	while (s2[z] != '\0')
	{
		s[y] = s2[z];
		y++, z++;
	}
	s[y] = '\0';
	return (s);
}
