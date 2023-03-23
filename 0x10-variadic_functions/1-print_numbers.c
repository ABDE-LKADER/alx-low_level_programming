#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_number -> prints an integer
 *
 * @n: input
 */

void print_number(int n)
{
	unsigned int m;

	if (n < 0)
	{
		m = -n;
		putchar('-');
	}
	else
		m = n;
	if (m / 10)
	{
		print_number(m / 10);
	}

	putchar((m % 10) + '0');
}

/**
 * print_numbers -> Prints numbers, followed by a new line.
 *
 * @separator: Input String Between Numbers
 * @n: Input Numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	unsigned int j;
	int num;
	va_list list;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(list, const unsigned int);
		print_number(num);
		if (separator != NULL && i < n - 1)
		{
			for (j = 0; separator[j] != '\0'; j++)
			{
				putchar(separator[j]);
			}
		}
	}
	putchar('\n');
	va_end(list);
}
