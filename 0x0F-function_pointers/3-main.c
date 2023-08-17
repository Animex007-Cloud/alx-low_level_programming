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
	int num1, num2, calc;
	int (*res)(int, int);
	char *get_op;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	get_op = argv[2];

	if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(100);
	}
	res = get_op_func(get_op);
	calc = res(num1, num2);

	printf("%d\n", calc);
	return (0);
}
