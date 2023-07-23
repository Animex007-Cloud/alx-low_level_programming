#include "main.h"

/**
 * print_number - Entry point
 *
 * Description: print value.
 * @n: entered variable
 *
 * Return: 0
 */

void print_number(int n)
{
	unsigned int tens, digit, positive = n;
	double y = 1;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			positive = n * -1;
			_putchar('-');
		}

		while (y <= positive)
			y *= 10;
		tens = y / 10;

		while (tens >= 1)
		{
			digit = positive / tens;
			_putchar(digit + '0');
			positive = (positive - (tens * digit));
			tens /= 10;
		}
	}
}
