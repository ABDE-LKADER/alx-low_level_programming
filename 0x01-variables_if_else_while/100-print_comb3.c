#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int first;
	int second;

	first = 0;
	while (first <= 9)
	{
		second = first + 1;
		while (second <= 9)
		{
			putchar(first + '0');
			putchar(second + '0');
			if (first < 8)
			{
				putchar(',');
				putchar(' ');
			}
			second++;
		}
		first++;
	}
	putchar('\n');
	return (0);
}
