#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: Write a function that prints its name.
 * @argc: int holder
 * @argv: strings print
 * Return: its name
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
