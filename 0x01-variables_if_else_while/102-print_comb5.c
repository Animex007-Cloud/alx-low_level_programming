#include <stdio.h>
/**
 * main - Always entry
 * Description: print all possible combination of two two.
 * Return: 0 (successful)
 */
int main(void)
{
	int num0;
	int num1;
	int num2;
	int num3;

	for (num0 = 0; num0 <= 9; num0++)
	{
		for (num1 = 0; num1 <= 8; num1++)
		{
			putchar(num0 + '0');
			putchar(num1 + '0');
			if (num0 != 9 || num1 != 8)
			{
				putchar(' ');

				{
					for (num2 = 0; num2 <= 9; num2++)
					for (num3 = (num2 + 1); num3 <= 9; num3++)
						{
							putchar(num2 + '0');
							putchar(num3 + '0');
							if (num2 != 9 || num3 != 9)
							{
								putchar(',');
								putchar(' ');
							}
						}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
