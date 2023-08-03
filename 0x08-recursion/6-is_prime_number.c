#include "main.h"


/**
 * is_prime - entry point
 * @n: int checker
 * @divider: divisor
 * Return: 1 if prime, 0 if not, or a recurision
 */
int is_prime(int n, int divider)
{
	if (n == divider)
		return (1);
	if (n % divider == 0)
		return (0);
	return (is_prime(n, divider + 1));
}

/**
 * is_prime_number - entry point
 * Description: return if input int is a prime number
 *
 * @n: number to check
 * Return: 1 if prime, 0 if not prime
 */

int is_prime_number(int n)
{
	int divider = 3;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);

	return (is_prime(n, divider));
}
