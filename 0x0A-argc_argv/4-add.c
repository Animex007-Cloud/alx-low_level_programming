#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * num - entry point
 * @s: character to test
 * Description: itration checker
 * Return: 1 if number and 0 if otherwise/
 */

int num(char *s)
{
	int a, b, len;
	
	a = 0;
	b = 0;
	len = strlen(s);
	while (a < len)
	{
		if (s[a] < '0' || s[a] > '9')
		{
			return (-1);
		}
		else
			b = b * 10 + (s[a] - '0');
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
	int sum = 0;
	int a, b;

	for (a = 1; a < argc; a++)
	{
		b = num(argv[a]);
		if (b == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += b;
	}
	printf("%d\n", sum);
	return (0);
}
