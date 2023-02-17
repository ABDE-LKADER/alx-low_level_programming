#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char hex_number;

	hex_number = '0';
	while (hex_number <= 'f')
	{
		if (hex_number <= '9' || hex_number >= 'a')
		{
			putchar(hex_number);
		}
		hex_number++;
	}
	putchar('\n');
	return (0);
}
