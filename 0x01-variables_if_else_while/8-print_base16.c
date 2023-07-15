#include <stdio.h>
/**
 * main - Always entry
 * Return: 0 (successful)
 */
int main(void)
{
	int i = '0';
	int a_f = 'a';
	
	while (i <= 9)  i++;
	{
	putchar(i);
	}
	while (a_f <= 'f') a_f++;
	{
	putchar(a_f);
	}
	putchar('\n');
	return (0);
}
