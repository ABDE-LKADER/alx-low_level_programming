#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int a, b, c, sum, T;

	b = 1;
	c = 2;
	sum = 0;
	for (a = 1; a <= 33; a++)
	{
		if (b < 4000000 && b % 2 == 0)
			sum += b;
		T = b + c;
		b = c;
		c = sum;
	}
	printf("%ld\n", b);
	return (0);
}
