#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	unsigned long int i, j, k, o, a, b, x, y;

	j = 1;
	k = 2;
	y = 1000000000;
	printf("%lu", j);
	for (i = 1; i < 91; i++)
	{
		printf(", %lu", k);
		k = k + j;
		j = k - j;
	}
	o = j / y;
	a = j % y;
	b = k / y;
	x = k % y;
	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", b + (x / y));
		printf("%lu", x % y);
		b += o;
		o = b - o;
		x += a;
		a = x - a;
	}
	printf("\n");
	return (0);
}
