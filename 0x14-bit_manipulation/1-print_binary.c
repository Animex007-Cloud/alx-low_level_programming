#include "main.h"

/**
 * _exponent - entry point
 * Description: A function calculate base raise to power
 *
 * @power: the number of exponent
 * @base: to be converted
 *
 * Return: the value of the equation
 */

unsigned long int _exponent(unsigned int base, unsigned int power)
{
	unsigned long int j = 1;
	unsigned int my_numz;

	for (my_numz = 1; my_numz <= power; ++my_numz)
		j *= base;
	return (j);
}

/**
 * print_binary - entry point
 * Description: A function that prints the representation of a number
 *
 * @n: binary
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	unsigned long int b, c;
	char e = 0;

	b = _exponent(2, sizeof(unsigned long int) * 8 - 1);
	while (b != 0)
	{
		c = n & b;
		if (c == b)
		{
			e = 1;
			_putchar('1');
		}
		else if (e == 1 || b == 1)
		{
			_putchar ('0');
		}
		b >>= 1;
	}
}
