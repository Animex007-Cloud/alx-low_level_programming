#include <stdio.h>
/**
 * main - Always entry
 * Return: 0 (Successful)
 */
int main(void)
{
	char ch = 'z';

	for (ch = 'z'; ch >= 'a'; --ch)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
