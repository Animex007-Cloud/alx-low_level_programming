#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 *
 * Description: Print 10 times the alphabet in lowercase
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int alph;
	int n;

	for (n = 0; n < 10; n++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
		_putchar(alph);
		}
		_putchar('\n');
	}
}
