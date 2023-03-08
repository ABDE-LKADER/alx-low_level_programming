#include "main.h"

/**
 * _div -> Check Divisible
 *
 * @n: Checked Number
 * @i: Divisor
 *
 * Return: Depend Condition
 */

int _div(int n, int i)
{
	if (n % i == 0)
		return (0);
	if (n / 2 == i)
		return (1);
	i++;
	return (_div(n, i));
}

/**
 * is_prime_number -> Prime numbers
 *
 * @n: Input Integer
 *
 * Return: Depend Condition
 */

int is_prime_number(int n)
{
	int i;

	i = 2;
	if (n <= 1)
		return (0);
	if (n >= 2 && n <= 3)
		return (1);
	return (_div(n, i));
}
