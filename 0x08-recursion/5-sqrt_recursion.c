#include "main.h"

/**
 * get_root - Entry point
 *
 * @n: num
 * @root: test this root first.
 *
 * Return: square root.
 */

int get_root(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (get_root(n, root + 1));
}

/**
 * _sqrt_recursion - Entry point
 *
 * Description: returns the natural square root of a num.
 * @n: int to be checked
 *
 * Return: square root of n, else -1 if n does not
 * have a square root.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (get_root(n, 0));
}
