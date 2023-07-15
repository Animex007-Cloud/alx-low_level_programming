#include <stdio.h>
/**
 * main - Always entry
 * Return: 0 (Successful)
 */
int main(void)
{

	char start = 'a';
	char end = 'z';

	for (char ch = start; ch <= end; ch++)
	{
	putchar(ch);
	}
	putchar('\n');

	return (0);
}
