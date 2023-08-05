#include "main.h"

/**
 * _memcpy - entry point
 * Description: function that copies memory area
 * @dest: filled memory
 * @src: copied from
 * @n: int
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int y = 0;
	int z = 0;

	while (n--)
	{
		dest[y] = src[z];
		y++;
		z++;
	}
	return (dest);
}
