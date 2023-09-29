#include "main.h"

/**
 * factorial - Entry point
 * Description: check next number if its possibly  a factorial
 * @n: integer to be checked
 * Return: factorial
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
		return (n * factorial(n - 1));
	}
}
