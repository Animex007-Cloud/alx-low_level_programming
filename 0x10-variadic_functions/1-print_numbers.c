#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Entry point
 *
 * Description: prints out numbers given.
 *
 * @separator: separator between numbers
 * @n: the number of arguments
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numb;
	unsigned int z;

	va_start(numb, n);
	for (z = 0; z < n; z++)
	{
		printf("%d", va_arg(num, unsigned int));
		if (z < (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(numb);
	printf("\n");
}
