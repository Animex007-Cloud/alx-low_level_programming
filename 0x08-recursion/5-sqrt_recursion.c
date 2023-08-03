#include "main.h"

/**
 * get_root - entry point
 * @n: number
 * @root: finder
 * Return: natural square root
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
 * _sqrt_recursion - entry point
 * Description: return the natural square root of a number
 * @n: variable
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	
	return (get_root(n, 0));
}
