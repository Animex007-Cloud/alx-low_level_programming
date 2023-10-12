#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - Entry point
 *
 * Description: function that sum all its parameters
 * @n: num of arguments
 *
 * Return: 0 if n is equal 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list numb;
	int sum;
	unsigned int z;

	if (n == 0)
		return (0);

	sum = 0;
	va_start(numb, n);
	for (z = 0; z < n; z++)
	{
		sum = sum + va_arg(numb, int);
	}
	va_end(numb);
	return (sum);
}
