#include <stdio.h>
/**
 * main - Always entry
 * Return: 0 (successful)
 */
int main(void)
{
	int i = '0';
	int a_f = 'a';

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	for (a_f = 'a'; a_f <= 'f'; a_f++)
	{
		putchar(a_f);
	}
	putchar('\n');
	return (0);
}
