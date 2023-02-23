#include <stdio.h>

/**
 * main -> The prime factors
 *
 * Return: Always 0 
 */

int main(void)
{
	long int number;
	long int div;

	div = 2;
	number = 612852475143;
	while (number != 0)
	{
		if (number % div == 0)
		{
			number /= div;
		}
		div++;
	}
	printf("%ld\n", div);
	return (0);
}
