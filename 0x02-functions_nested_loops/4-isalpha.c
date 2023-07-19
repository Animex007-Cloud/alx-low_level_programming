#include "main.h"
#include <ctype.h>

/**
 * _isalpha - Entry point
 *
 * Description: Write a function that checks lowercase or uppercase.
 * @c: A declared variable
 * Return: 0
 */
int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
