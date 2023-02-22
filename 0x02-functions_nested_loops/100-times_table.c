#include "main.h"

/**
 * print_times_table -  prints n times table, starting with 0
 * @n: input
 */

void print_times_table(int n)
{
	int a;
	int b;

	if (n <= 15 && n > 0)
	{
		for (a = 0; a <= n; a++)
		{
			for (b = 0; b <= n; b++)
			{
				if (a * b <= 9)
				{
					if (b != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
						_putchar(a * b + '0');
				}
				else
				{
					if (a * b <= 99)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar((a * b) / 10 + '0');
						_putchar((a * b) % 10 + '0');
					}
					else
					{
						_putchar(' ');
						_putchar((a * b) / 100 + '0');
						_putchar(((a * b) / 10) % 10  + '0');
						_putchar((a * b) % 10 + '0');

					}
				}
				if (b != n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
