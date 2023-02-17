#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*l is the last digit of number n*/
	l = n % 10;
	if (l < 6)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, l);
	}
	else if (l > 5)
	{
		printf("Last digit of %d is %d and is graeter than 5\n", n, l);
	}
	else
		printf("Last digit of %d is %d and is 0\n", n, l);
	return (0);
}
