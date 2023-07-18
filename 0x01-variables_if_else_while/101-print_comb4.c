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
	int num3;

	for (num1 = 0; num1 <= 9; num1++)
	for (num2 = (num1 + 1); num2 <= 9; num2++)
	for (num3 = (num2 + 2); num3 <= 9; num3++)
	{
		putchar(num1 + '0');
		putchar(num2 + '0');
		putchar(num3 + '0');
	}
	if (num1 != num2 && num2 != num3)

	{
		putchar('.');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
