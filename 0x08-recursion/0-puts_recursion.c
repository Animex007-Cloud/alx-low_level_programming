#include "main.h"

/**
 * _puts_recursion - entry point
 * Description: function that prints a string
 * @s: declared character
 * Return: 0
 */

void _puts_recursion(char *s)
{
	
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s = s + 1;
	_puts_recursion(s);
}
