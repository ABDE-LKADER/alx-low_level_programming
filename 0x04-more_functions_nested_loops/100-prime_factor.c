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

	number = 612852475143;
	for(div = 2; div != 1; div++)
	{
		if (number % div == 0)
		{
			number /= div;
		}
	}
	printf("%ld\n", number);
	return (0);
}
