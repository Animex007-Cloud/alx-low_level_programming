#include "main.h"

/**
 * get_endianness - entry point.
 * Description: A function that checks for endianness
 * Return: 1 if little endian and 0 if big endian
 */

int get_endianness(void)
{
	int b = 1;
	char *c;

	c = (char *)&b;
	return (*c);
}
