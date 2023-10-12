#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - Entry point
 * Description: prints a name
 *
 * @f: pointer to function returning nothing.
 * @name: pointer to character
 * Return: 0
 */

void print_name(char *name, void (*f) (char *))
{
	if (name != NULL && *name != '\0' && f != NULL)
		f(name);
}
