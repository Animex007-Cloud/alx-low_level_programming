#include "main.h"

/**
 * print_last_digit - Entry point
 *
 * Description: print last digit of a number
 *
 * @i: An entered int
 * Return: 0
 */
int print_last_digit(int i)
{
	int ld = i % 10;

	if (ld < 0)
	{
		_putchar(-ld + '0');
		return (-ld);
	}
	else
	{
		_putchar(ld + '0');
		return (ld);
	}
	_putchar('\n');
	return (0);
}

