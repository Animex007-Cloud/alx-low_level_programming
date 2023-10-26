#include "main.h"

/**
 * clear_bit - entry point
 * Description: A function that sets the value of bit to 0 to be cleared
 *
 * @index: sets the value of bit
 * @n: the number of bit to be cleared
 *
 * Return: -1 if error, 1 if success
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	b = ~(1 << index);
	*n = *n & b;
	return (1);
}
