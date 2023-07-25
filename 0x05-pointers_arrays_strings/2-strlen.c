#include "main.h"

/**
 * _strlen - Entry point
 * Description: function that returns the length of a string
 *
 * @s: declared int
 *
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
	{
		return (length);
	}
}

