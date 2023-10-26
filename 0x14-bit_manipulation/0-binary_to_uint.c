#include "main.h"

/**
 * binary_to_uint - entry point
 * Description: A function that converts a binary num
 * to an unsigned int
 *
 * @b: pointer to main
 * Return: the converted num
 */

unsigned int binary_to_uint(const char *b)
{
	int c;
	unsigned int final = 0;

	if (!b)
		return (final);
	for (c = 0; b[c] != '\0'; c++)
	{
		if (b[c] != '0' && b[c] != '1')
			return (0);
	}
	for (c = 0; b[c] != '\0'; c++)
	{
		final <<= 1;
		if (b[c] == '1')
			total += 1;
	}
	return (final);
}
