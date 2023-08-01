#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - entry point
 * Description: printing the sum of two int
 * @a: pointer
 * @size: size of matrix
 */

void print_diagsums(int *a, int size)
{
	int diag = 0;
	int diag_sum2 = 0;
	int row, i;

	for (row = 0; row < size; row++)
	{
		i = (row * size) + row;
		diag += a[i];
	}
	for (row = 1; row <= size; row++)
	{
		i = (row * size) - row;
		diag_sum2 += a[i];
	}
	printf("%d, %d\n", diag, diag_sum2);
}
