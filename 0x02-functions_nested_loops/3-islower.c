#include "main.h"
#include <ctype.h>

/**
 * _islower - Entry point
 *
 * Description: Write a function that checks for lowercase character
 * @c: A declared variable
 * Return: 0
 */
int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
