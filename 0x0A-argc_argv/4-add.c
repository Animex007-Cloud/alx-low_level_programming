#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * num - Entry point
 *
 * @x: character to be tested
 * Description: check each argv to test if number by iterating.
 *
 * Return: 1 if number, 0 if not
 */

int num(char *x)
{
	int y, z, len;

	y = 0;
	z = 0;
	len = strlen(x);
	while (y < len)
	{
		if (x[y] < '0' || x[y] > '9')
		{
			return (-1);
		}
		else
			z = z * 10 + (x[y] - '0');
		y++;
	}
	return (z);
}
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument array
 * Description: print sum if all arguments are numbers.
 * Return: 0 (Success), 1 if an argumen isn't a number.
 */

int main(int argc, char *argv[])
{
	int y, z, add;

	add = 0;
	for (y = 1; y < argc; y++)
	{
		z = num(argv[y]);
		if (z == -1)
		{
			-printf("Error\n");
			return (1);
		}
		add += z;
	}
	printf("%d\n", add);

	return (0);
}
