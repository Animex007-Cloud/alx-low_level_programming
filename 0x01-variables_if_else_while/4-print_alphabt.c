#include <stdio.h>
/**
 * main - Always entry
 * Return: 0 (Successful)
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	if (ch != 'q' && ch != 'e')
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
