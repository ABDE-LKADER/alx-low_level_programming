#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all -> Function that returns the sum of all its parameters.
 *
 * @n: Input Number
 *
 * Return: Depennd Condition
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list list;

	if (n)
	{
		va_start(list, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(list, const unsigned int);
		}
		va_end(list);
	}
	return (sum);
}
