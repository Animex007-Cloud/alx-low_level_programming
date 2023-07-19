#include "main.h"

/**
 * _abs - Entry point
 *
 * Description: A function that computes the absolute valus of an integer.
 *
 * @x: Enternd int
 * Return: 0
 */

int _abs(int x)
{
	if (x < 0)
	{
		return (-x);
	}
	else if (x > 0)
	{
		return (+x);
	}
	else
	{
		return (x);
	}
	_putchar('\n');
	return 0;
}
