#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * Description: prints the minimum no. of coins to make
 * change for.
 *
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
	int numbz, j, totalz;
	int fin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	numbz = atoi(argv[1]);
	totalz = 0;

	if (numbz < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && numbz >= 0; j++)
	{
		while (numbz >= fin[j])
		{
			totalz++;
			numbz -= fin[j];
		}
	}
	printf("%d\n", totalz);
	return (0);
}
