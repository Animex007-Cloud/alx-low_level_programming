#include "main.h"

/**
 * print_triangle - Entry point
 * Description: prints triangls
 *
 * @size: size of the triangle
 *
 * Return: 0
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
		_putchar('\n');
	for (x = 1; x <= size; x++)
	{
		for (y = 1; y <= (size - x); y++)
			_putchar(' ');
		for (z = 1; z <= x; z++)
			_putchar('#');

		_putchar('\n');
	}
}
