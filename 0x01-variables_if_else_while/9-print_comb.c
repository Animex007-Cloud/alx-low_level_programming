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

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
		if (i != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
