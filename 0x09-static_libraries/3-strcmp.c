#include "main.h"

/**
 * _strcmp -Entry poin
 * Description: compare two strings
 * @s1: first string
 * @s2: second string
 * Return: 0
 */

int _strcmp(char *s1, char *s2)
{
	int z = 0;

	while (*(s1 + z) == *(s2 + z) && *(s1 + z))
		z++;

	if  (*(s2 + z))
		return (*(s1 + z) - *(s2 + z));
	else
		return (0);
}
