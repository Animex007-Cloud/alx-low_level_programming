#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - Entry point
 *
 * Description: print strings followed by a new line
 * @separator: The string to be printed btw teh strings
 * @n: the number of arguments in the list
 *
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int z;
	char *s;

	va_start(str, n);
	for (z = 0; z < n; z++)
	{
		s = va_arg(str, char *);
		if (s == NULL)
			printf("(nil)");
		else
		{
			printf("%s", s);
			if (z < n - 1 && separator != NULL)
				printf("%s", separator);
		}
	}
	va_end(str);
	printf("\n");
}
