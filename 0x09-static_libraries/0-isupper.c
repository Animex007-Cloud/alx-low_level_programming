#include "main.h"

/**
 * _isupper - Entry point
 *
 * Description: A function that checks for uppercase
 * @c: inputed int
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
