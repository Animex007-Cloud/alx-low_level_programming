#include <stdio.h>
/**
 * main - Always entry
 * Return: 0 (Successful)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
	putchar(num + 48);
	}
	putchar('\n');
	return (0);
}
