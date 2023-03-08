#include "main.h"

/**
 * _sqrt -> Square root of a number
 *
 * @n: Input Number
 * @i: Parameter
 *
 * Return: Depend Condition
 */

int _sqrt(int n, int i)
{
	if (n < 0 || i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	i++;
	return (_sqrt(n, i));
}

/**
 * _sqrt_recursion -> Square main
 *
 * @n: Input Number
 *
 * Return: Square
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
