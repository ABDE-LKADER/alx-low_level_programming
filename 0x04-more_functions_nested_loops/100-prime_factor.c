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
	for(div = 2; div <= number; div++)
	{
		if (number % div == 0)
		{
			number /= div;
		}
	}
	printf("%lu\n", number);
	return (0);
}
