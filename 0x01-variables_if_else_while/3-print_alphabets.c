#include <stdio.h>
/**
 * main - Always entry
 * Return: 0 (Successful)
 */
int main(void)
{

	char ch = 'a';
	char ch = 'A';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
	putchar(ch);
	}
	for (ch = 'A'; ch <= 'Z'; ch++)
	{
	putchar(ch);
	}
	putchar('\n');
	return (0);
}
