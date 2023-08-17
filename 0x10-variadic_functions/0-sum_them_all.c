#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - entry point
 * Description: A function that returns the sum of all its parameters
 * @n: variadic parameter input
 * Return: 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list lst;
	unsigned int z, add = 0;

	if (n == 0)
		return (0);

	va_start(lst, n);

	for (z = 0; z < n; z++)
	{
		add += va_arg(lst, const unsigned int);
	}
	va_end(lst);

	return (add);
}
