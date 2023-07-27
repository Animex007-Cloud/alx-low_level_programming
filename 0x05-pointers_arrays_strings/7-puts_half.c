#include "main.h"

/**
 * _strlen - entry point
 * @s: declared string
 *
 * Return: length
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
 * puts_half - entry point
 *
 * Description: prints half of a string
 * @str: string
 *
 * Return: (0)
 */

void puts_half(char *str)
{
	int z;
	int len = _strlen(str);

	if (len % 2 != 0)
		z = (len / 2) + 1;
	else
		z = (len / 2);

	while (z < len)
	{
		_putchar(*(str + z));
		z++;
	}
	_putchar('\n');
}
