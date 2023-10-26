#include "main.h"

/**
 * get_bit - entry point
 * Description: A function that returns the
 * value of a bit given by index
 *
 * @index: that starts from 0
 * @n: bits
 * Return: desired value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int b, c;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	b = 1 << index;
	c = n & b;
	if (c == b)
		return (1);
	return (0);
}
