#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	long int a, b, c, sum;

	b = 1;
	c = 2;
	for (a = 1; a <= 50; a++)
	{
		if (b != 49)
			printf("%ld, ", b);
		else
			printf("%ld\n", b);
		sum = b + c;
		b = c;
		c = sum;
	}
	return (0);
}
