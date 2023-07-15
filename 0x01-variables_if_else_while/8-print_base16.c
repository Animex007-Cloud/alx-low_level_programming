#include <stdio.h>
/**
 * main - Always entry
 * Return: 0 (successful)
 */
int main(void)
{
	int cha;

	for (cha = 0; cha <= 16; cha++)
	char hexdigit;

	if (cha < 10)
	hexdigit = 0 + cha;

	else
       	hexdigit = 'a' + (cha - 10);
	{
	putchar(hexdigit);
	}
	putchar('\n');
	return (0);
}
