#include "main.h"

/**
 * _pow_recursion - Entry point
 *
 * Description: A function that returns the value of and integer raise.
 * @x: value to be checked
 * @y: integer power
 * Return: Value of (x)
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
