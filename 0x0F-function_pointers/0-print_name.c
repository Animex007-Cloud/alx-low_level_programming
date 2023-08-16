#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - entry point
 * Description: function that prints a name
 * @name: char pointer
 * @f: function pointer pointing to a function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL)
		return;
	if (f == NULL)
		return;
	f(name);
}
