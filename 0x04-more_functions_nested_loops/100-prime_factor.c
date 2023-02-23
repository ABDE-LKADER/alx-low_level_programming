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
	long int factor;

	d = 2;
	n = 612852475143;
	while (n != 1)
	{
		if (n % d == 0)
		{
			n /= d;
			factor = d;
		}
		d++;
	}
	printf("%ld\n", factor);
	return (0);
}
