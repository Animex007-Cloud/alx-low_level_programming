#include "main.h"

/**
 * *_strncat - entry point
 *
 * Description: cat two string
 *
 * @dest: first char
 * @src: second char
 * @n: declared int
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int y = 0;
	int z = 0;

	while (dest[y] != '\0')
		y++;

	while (src[z] != src[n])
	{
		dest[y] = src[z];
		y++;
		z++;
	}
	dest[y] = '\0';

	return (dest);
}
