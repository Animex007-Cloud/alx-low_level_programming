#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Always entry
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int Lastd = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (Lastd > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n);
	}
	else if (Lastd == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n);
	}
	else if (Lastd < 6 && !(0))
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n);
	}
	return (0);
}
