#include <stdio.h>
/**
 * main - Always entry
 * Description: print a combination of three.
 * Return: 0 (Success)
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 <= 12; num1++)
	for (num2 = (num1 + 1); num2 <= 12; num2++)
	{
		putchar(num1 + '0');
		putchar(num2 + '0');
	}
	if (num1 != num2)

	{
		putchar('.');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
