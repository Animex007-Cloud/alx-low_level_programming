#include "main.h"

/**
 * sub_match - Entry point.
 * @s1: string
 * @s2: another string
 * @wildc: holder
 * Return: 1 if there is a match, 0 if false.
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
 * wildcmp - Entry point
 *
 * Description: function that compares if a string with wildcard matches
 * @s1: string one
 * @s2: string two
 *
 * Return: 1 if there is a match, 0 if no match.
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
