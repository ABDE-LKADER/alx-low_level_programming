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

	div = 3;
	number = 612852475143;
	while (div <= number)
	{
		while (number % div == 0 && number != div)
		{
			number /= div;
		}
		div++;
	}
	printf("%ld\n", number);
	return (0);
}
