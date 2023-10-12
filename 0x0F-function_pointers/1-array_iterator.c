#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Entry point
 *
 * Description: executes a function on an array.
 * @action: pointer to function
 * @size: num elements in array
 * @array: pointers to array
 * Return: 0
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int z;

	if (array != NULL && size > 0 && action != NULL)
	{
		for (z = 0; z < size; z++)
			action(array[z]);
	}
}
