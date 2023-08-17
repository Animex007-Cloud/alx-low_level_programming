#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * Description: A function that process parameters
 * @argc: int argument
 * @argv: pointer to argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	int (*res)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	res = get_op_func(argv[2]);

	if (res == NULL || (argv[2][1] != '\0'))
	{
		printf("Error\n");
		exit(99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && argv[3][0] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", res(num1, num2));

	return (0);
}
