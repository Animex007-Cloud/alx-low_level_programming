#include "main.h"

/**
 * _strlen_recursion - enyrt point
 * Description: return length of string
 * @s: pointer
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _etrlen_recursion(s + 1));
	}
}

