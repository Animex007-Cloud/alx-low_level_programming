#include "main.h"

/**
 * _strlen - entry point
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
 * _strcpy - entry point
 * Description: Copy the string pointed to by src to dest
 * @dest: first string
 * @src: second string
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int z;

		for (z = 0; z <= _strlen(src); z++)
			dest[z] = src[z];

	return (dest);
}
