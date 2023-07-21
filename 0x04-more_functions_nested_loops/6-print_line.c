#include "main.h"

/**
 * print_line - Entry point
 * Description: write a function that draws straight line
 * @n: int
 *
 * Return: 0
 */

void print_line(int n)
{
	int a = n;

	for (a = n; a > 0; a--)
	{
		_putchar('_');
	}
	_putchar('\n');
}

