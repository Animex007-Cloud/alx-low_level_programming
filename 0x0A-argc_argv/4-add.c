#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * num - entry point
 * @s: character to test
 * Description: itration checker
 * Return: 1 if number and 0 if otherwise/
 */

int num(char *x)
{
	int a, b, length;
	
	a = 0;
	b = 0;
	length = strlen(x);

	while (a < length)
	{
		if (x[a] < '0' || x[a] > '9')
		{
			return (-1);
		}
		else
			b = b * 10 + (x[a] - '0');
		a++;
	}
	return (b);
}

/**
 * main - entry point
 * Description: conditional program that adds numbers
 * @argc: int holder
 * @argv: string holder
 * Return: 0 (success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int add = 0;
	int a, b;

	for (a = 1; a < argc; a++)
	{
		b = num(argv[a]);
		if (b == -1)
		{
			printf("Error\n");
			return (1);
		}
		add += b;
	}
	printf("%d\n", add);
	return (0);
}
