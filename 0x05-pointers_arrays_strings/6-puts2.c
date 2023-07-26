#include "main.h"

/**
 * _strlen - Entry point
 * @s: string
 *
 * Return: len
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

/**
 * puts2 - entry point
 * Description: function that prints every other character of a string
 * @str: string
 *
 * Return: 0
 */

void puts2(char *str)
{
	int a;

	for (a = 0; str[a] != '\0' && a < _strlen(str); a += 2)
		_putchar(str[a]);
	_putchar('\n');
}
