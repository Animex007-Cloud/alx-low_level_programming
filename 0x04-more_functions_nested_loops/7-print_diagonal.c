#include "main.h"

/**
 * print_diagonal - Entry point
 * Description: draw a diognal line
 *
 * Return: 0
 */

void print_diagonal(int n)
{
	int i = n;

	for (i = n; i > 0; i--)
	{
		_putchar(47);
	}
	_putchar('\n');
}
