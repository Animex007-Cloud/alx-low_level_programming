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
	int Lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Lastd = n % 10;
	if (Lastd > 5)
	{
		printf("Last digit of %i is %i and is greater than 5\n", n, Lastd);
	}
	else if (Lastd == 0)
	{
		printf("Last digit of %i is %i and is 0\n", n, Lastd);
	}
	else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, Lastd);
	}
	return (0);
}
