#include "main.h"

/**
 * times_table - Entry point
 * Description: print the 9 times table
 *
 * Return: 0
 */
void times_table(void)
{
	int multi;
	int result;

	for (multi = 0; multi <= 9; multi++)
	{
		result = 9 * multi;
		_putchar('0' + multi);
		_putchar('x');
		_putchar('0' + 9);
		_putchar('=');
		_putchar('0' + result / 10);
		_putchar('0' + result % 10);
		_putchar('\n');
	}
}
