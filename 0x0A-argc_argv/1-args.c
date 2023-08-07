#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * Descriptoin: A function that prints the number of arguments passed to it
 * @argc: number holder
 * @argv: string holder
 * Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc);
	return (0);
}
