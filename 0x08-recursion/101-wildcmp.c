#include "main.h"

/**
 * sub_match - entry point
 * @s1: string
 * @s2: amother string
 * @wildc: holder
 * Return: 1 or 0
 */

int sub_match(char *s1, char *s2, char *wildc)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == '\0' && *s2 == '*')
		return (sub_match(s1, s2 + 1, s2 + 1));
	if (*s1 == '\0' && *s2 != '\0')
		return (0);
	if (*s2 == '*')
		return (sub_match(s1, s2 + 1, s2 + 1));
	if (*s1 == *s2)
		return (sub_match(s1 + 1, s2 + 1, wildc));
	else
		return (sub_match(s1 + 1, wildc, wildc));
}

/**
 * wildcmp - entry point
 * @s1: first string
 * @s2: second string
 * Description: compare if a string with wildcard matches
 * Return: 1 is it matches otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s2 == '*')
		return (sub_match(s1, (s2 + 1), (s2 + 1)));
	else
		return (0);
}
