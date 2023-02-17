#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit;

	digit = 0;
	while (digit <= 9)
	{
		putchar(digit + '0');
		putchar(',');
		if (digit != 9)
		{
			putchar(' ');
		}
		digit++;
	}
	/*putchar('\n');*/
	return (0);
}
