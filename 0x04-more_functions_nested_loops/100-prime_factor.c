#include <stdio.h>

/**
 * main - The prime factors
 *
 * Return: Always 0
 */

int main(void)
{
	long int n;
	long int d;
	long int total;

	d = 2;
	n = 612852475143;
	while (n != 1)
	{
		if (n % d == 0)
		{
			n /= d;
			total = d;
		}
		d += 1;
	}
	printf("%ld\n", total);
	return (0);
}
