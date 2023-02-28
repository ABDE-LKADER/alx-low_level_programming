#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Generates random passwords 101-crackme
 *
 * Return: Always 0
 */

int main(void)
{
	int sum;
	char ran;

	srand(time(NULL));
	while (sum <= 2772)
	{
		ran = rand() % 128;
		sum += ran;
		putchar(ran);
	}
	putchar(2772 - sum);
	return (0);
}
