#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Description: A code that prints the number of arguments passed to program.
 *
 * @argc: argument count
 * @argv: pointer to array of arg.
 *
 * Return: Always 0 (Success).
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
