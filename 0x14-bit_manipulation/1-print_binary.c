#include "main.h"

/**
 * print_binary -> Prints the binary representation of a number
 *
 * @n: Input Number
*/

void print_binary(unsigned long int n)
{
	int i, n = 0;
	unsigned long int num;

	if (n == 0)
		_putchar('0');
	for (i = 63; i >= 0; i--)
	{
		num = get_bit(n, i);
		if (num == 1)
			n = 1;
		if (n == 1)
			_putchar(num + '0');
	}
}
