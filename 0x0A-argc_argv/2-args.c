#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: pointer to array
 *
 * Description: print each argument passed to program on a new line.
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int z = 0;

	while (z < argc)
		printf("%s\n", argv[z++]);

	return (0);
}
