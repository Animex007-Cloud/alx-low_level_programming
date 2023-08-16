#include <stdio.h>

/**
 * array_iterator - entry point
 * Description: function that executes a function given as a parameter
 * @array: pointer to array
 * @size: size of declared array
 * @action: pointer to funtion
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
