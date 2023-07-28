#include "main.h"

/**
 * reverse_array - entry point
 * Description: reverse arrays
 *
 * @a: array
 * @n: numbers
 */
void reverse_array(int *a, int n)
{
	int tmp, y = 0;
	int z = n - 1;

	while (y < z)
	{
		tmp = *(a + y);
		*(a + y) = *(a + z);
		*(a + z) = tmp;
		y++;
		z--;
	}
}
