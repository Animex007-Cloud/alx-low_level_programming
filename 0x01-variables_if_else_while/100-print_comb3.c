#include <stdio.h>
/**
 * main - Always entry
 * Description: Print all possible different combination of two digits.
 * Return: 0 (Success)
 */
int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 <= 9; num1++)
	for (num2 = (num1 + 1); num2 <= 9; num2++)
		if (num1 != 8 || num2 != 9)

		putchar(num1);
		putchar(num2);

	putchar(',');
	putchar(' ');

		putchar('\n');

	return (0);
}
