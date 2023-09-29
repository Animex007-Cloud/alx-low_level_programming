#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - entry point
 * Description: function tat returns the length of a string
 * @s: pointer to string
 * Return: 0
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
