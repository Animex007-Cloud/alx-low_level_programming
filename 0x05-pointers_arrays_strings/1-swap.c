#include "main.h"

/**
 * swap_int - Entry point
 * Description: Function that swaps the value of two int
 *
 * @a: first int
 * @b: second int
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
