#include "main.h"

/**
 * jack_bauer -> Every minute of the day from 00:00 to 23:59
 *
 * Return: value of the last digit
 */

void jack_bauer(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 23)
	{
		b = 0;
		while (b <= 59)
		{
			_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			_putchar(':');
			_putchar(b / 10 + '0');
			_putchar(b % 10 + '0');
			_putchar('\n');
			b++;
		}
		a++;
	}
}
