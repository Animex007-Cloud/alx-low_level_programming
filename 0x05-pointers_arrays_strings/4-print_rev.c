#include "main.h"

/**
 * print_rev - Entry point
 * Description: print in reverse
 *
 * @s: declared character
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int len = 0;
	int x;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;

	for (x = len; x > 0; x--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
