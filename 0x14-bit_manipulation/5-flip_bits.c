#include "main.h"

/**
 * flip_bits - entry point
 * Description: A function that returns the number
 * of bits that will be needed to flip
 * to get from onr flip
 *
 * @m: second bit
 * @n: first bit
 * Return: flipped numbers
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int change, c;
	unsigned int sum, b;

	c = 1;
	sum = 0;
	change = n ^ m;

	for (b = 0; b < (sizeof(unsigned long int) * 8); ++b)
	{
		if (c == (change & c))
			++sum;
		c <<= 1;
	}
	return (sum);
}
