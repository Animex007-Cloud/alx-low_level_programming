#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: A code that prints the name of the program.
 * @argc: num of argument
 * @argv: arrayed argument
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
