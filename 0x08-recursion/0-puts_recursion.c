#include "main.h"

/**
 * _puts_recursion - entry point
 * Description: a function that prints a string
 * @s: pointer to string
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		s += 1;
		_put_resursion(s);
	}
}
