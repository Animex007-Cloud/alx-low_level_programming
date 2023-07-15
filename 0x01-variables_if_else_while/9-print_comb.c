#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: Print numbers with commas.
 *
 * Return: 0 (Succes)
 */
int main(void)
{
	int i = '0';

	while (i <= '9')
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
