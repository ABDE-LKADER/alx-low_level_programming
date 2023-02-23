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

	d = 2;
	n = 612852475143;
	while (n != 1)
	{
		if (n % d == 0)
		{
			n /= d;
		}
		d++;
	}
	printf("%ld\n", d);
	return (0);
}
