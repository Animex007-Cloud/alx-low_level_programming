#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - entry point
 * Description: A function that prints numbers
 * @separator: string to be printed
 * @n: integer passed
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int z;
	va_list lt;

	if (separator == NULL || *separator == 0)
		separator = "";
	else
		separator = (char *) separator;
	va_start(lt, n);

	if (n > 0)
		printf("%d", va_arg(lt, int));
	for (z = 1; z < n; z++)
		printf("%s%d", separator, va_arg(lt, int));
	printf("\n");
	va_end(lt);
}
