#include "main.h"

/**
 * factorial - entry point
 * Description: return the value of a given number
 * @n: declared int
 * Return 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return n * factorial(n - 1);
	}
}
