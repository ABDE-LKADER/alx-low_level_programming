#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -> Prints the sum of the two diagonals
 *
 * @a: Input String
 * @size: Input Size
 */

void print_diagsums(int *a, int size)
{
	int i;
	unsigned int sm;
	unsigned int sum;

	sm = 0;
	sum = 0;
	for (i = 0; i < size; i++)
	{
		sm += a[(size * i) + i];
		sum += a[(size * (i + 1)) - (i + 1)];
	}

	printf("%d, %d\n", sm, sum);
}
