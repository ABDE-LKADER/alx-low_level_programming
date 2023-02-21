#include "main.h"

/**
 * print_last_digit -> prints the last digit of a number
 *
 * @n: print_last_digit input
 *
 * Return: Always n (Success)
 */

int print_last_digit(int n)
{
	if (n < 0 && n != -2147483648)
	{
		n *= -1;
		n %= 10;
		_putchar(n + '0');
	}
	else if (n > 0)
	{
		n %= 10;
		_putchar(n + '0');
	}
	else
	{
		n %= 10;
		_putchar(n + '0');
	}
	return (n);
}
