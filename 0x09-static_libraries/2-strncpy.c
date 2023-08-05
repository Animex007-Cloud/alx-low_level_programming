#include "main.h"

/**
 * *_strncpy - entry point
 *
 * Description: function thta copies a string
 *
 * @dest: first char
 * @src: second char
 * @n: declared int
 * Return: 0
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int y;

	for (y = 0; y < n && src[y] != '\0'; y++)
		dest[y] = src[y];

	while (y < n)
	{
		dest[y] = '\0';
		y++;
	}
	return (dest);
}
