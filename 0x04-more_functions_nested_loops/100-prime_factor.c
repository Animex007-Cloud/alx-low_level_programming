#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A program that finds and prints the largest prime factor
 * Return: 0
 */
int main(void)
{
	unsigned long x = 612852475143;
	unsigned long y = 2;

	while (y < x)
	{
		if (x % y == 0)
		{
			x /= y;
			y = 2;
		}
		else
			y++;
	}
	printf("%lu\n", x);
	return (0);
}
