#include "main.h"

/**
 * print_sign -> prints the sign of a number
 *
 * @n: print_sign variable
 *
 * Return: 1 and 0 and -1 (Condition)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
