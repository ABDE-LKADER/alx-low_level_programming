#include "main.h"

/**
 * factorial ->  The factorial of a given number
 *
 * @n: Input Number
 *
 * Return: Depend Condition
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
