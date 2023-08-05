#include "main.h"

/**
 * *_strcat - entry point
 *
 * Description: A function that concatenates two strings
 *
 * @dest: string one
 * @src: string two
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int y = 0;
	int z = 0;

	while (dest[y] != '\0')
		y++;

	while (src[z] != '\0')
	{
		dest[y] = src[z];
		y++;
		z++;
	}
	dest[y] = '\0';

	return (dest);
}
