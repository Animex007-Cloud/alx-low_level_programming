#include "main.h"

/**
 * set_bit - entry point
 * Description: A function that set the value of a bit
 * to 1 at a given index
 *
 * @index: counts from 0
 * @n: set to index
 * Return: on error if -1, success if 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	b = 1 << index;
	*n = *n | b;
	return (1);
}
