#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - entry point
 * Description: function that searchs for an integer
 * @array: pointer to array
 * @size: number of elements in the array
 * @cmp: pointer to function
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int z;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	for (z = 0; z < size; z++)
	{
		if (cmp(array[z]) != 0)
			return (z);
	}
	return (-1);
}
