#include <stdio.h>
/**
 * main - Always entry
 * Return: 0 (Successful)
 */
int main(void)
{

	char lowerch = 'a';
	char upperch = 'A';

	for (lowerch = 'a'; lowerch <= 'z'; lowerch++)
	{
	putchar(lowerch);
	}
	for (upperch = 'A'; upperch <= 'Z'; upperch++)
	{
	putchar(upperch);
	}
	putchar('\n');
	return (0);
}
