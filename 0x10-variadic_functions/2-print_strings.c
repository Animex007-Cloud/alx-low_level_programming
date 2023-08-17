#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - entry point
 * Description: function that prints strings, folloewd by a new line
 * @separator: strings to be printed
 * @n: number of strings holder
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int z;
	va_list lt;
	const char *str;

	if (separator == NULL || *separator == 0)
		separator = "";
	else
		separator = (char *) separator;

	va_start(lt, n);

	if (n > 0)
		printf("%s", va_arg(lt, char *));
	for (z = 1; z < n; z++)
	{
		str = va_arg(lt, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s%s", separator, str);
	}
	printf("\n");
	va_end(lt);
}
