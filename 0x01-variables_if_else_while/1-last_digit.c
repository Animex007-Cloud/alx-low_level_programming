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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (Lastdigit == n && Lastdigit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n);
	}
	else if (n == Lastdigit && Lastdigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n);
	}
	else if (n == Lastdigit && Lastdigit < 6 && != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n);
	}
	return (0);
}