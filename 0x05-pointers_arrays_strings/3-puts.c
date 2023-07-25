#include "main.h"

/**
 * _puts(char *str)- entry point
 * Description: function that prints a string followed by a new line
 *
 * @str: declared char
 *
 * Return: 0
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);

		_putchar('\n');
	}
}
