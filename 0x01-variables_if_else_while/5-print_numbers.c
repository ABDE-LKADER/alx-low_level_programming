#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char number;

	number = '0';
	while (number <= '9')
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}
