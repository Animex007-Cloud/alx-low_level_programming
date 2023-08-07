#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: Print all argument recieved also printing each on a new line
 * @argc: int holder
 * @argv: string holder
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
