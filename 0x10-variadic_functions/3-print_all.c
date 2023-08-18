#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - entry point
 * Description: function that prints anything
 * @format: list type of arguments passed
 * Return: 0
 */

void print_all(const char * const format, ...)
{
	va_list lt;
	int y = 0, z = 0;
	char *srt;
	char *st = ", ";

	va_start(lt, format);

	while (format && format[z])
		z++;

	while (format && format[y])
	{
		if (y == (z - 1))
		{
			st = "";
		}
		switch (format[y])
		{
		case 'c':
			printf("%c%s", va_arg(lt, int), st);
			break;
		case 'i':
			printf("%d%s", va_arg(lt, int), st);
			break;
		case 'f':
			printf("%f%s", va_arg(lt, double), st);
			break;
		case 's':
			srt = va_arg(lt, char *);
			if (srt == NULL)
				srt = "(nil)";
			printf("%s%s", srt, st);
			break;
		}
		y++;
	}
	printf("\n");
	va_end(lt);
}
