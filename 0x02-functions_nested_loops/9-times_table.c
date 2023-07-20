#include "main.h"

/**
 * times_table - Entry point
 * Description: print the 9 times table
 *
 * Return: 0
 */

void times_table(void)
{
	int x;
	int y;
	int result;

	for (x = 0; x <= 9; x++)
	{
		_putchar(48);
		for (y = 1; y <= 9; y++)
		{
			result = x * y;
			_putchar(44);
			_putchar(32);
			if (result < 10)
			{
				_putchar(32);
				_putchar(result + 48);
			}
			else
			{
				_putchar((result / 10) + 48);
				_putchar((result % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
