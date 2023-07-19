#include "main.h"

/**
 * print_alphabet - Entry point
 *
 * Description: Print alphabet in lowercase followed by new line.
 * Return: 0 (Success)
 */
void print_alphabet(void)
{
	int cha = 'a';

	for (cha = 'a'; cha <= 'z'; cha++)
	{
		_putchar(cha);
	}
	_putchar('\n');
}
