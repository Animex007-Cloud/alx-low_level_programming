#include "main.h"

/**
 * print_square - entry point
 *
 * Description: print a square
 * @size: int
 * Return: 0
 */

void print_square(int size)
{
	int row, columns;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (columns = 1; columns <= size; columns++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
