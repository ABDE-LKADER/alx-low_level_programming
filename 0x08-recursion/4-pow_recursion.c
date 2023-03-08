#include "main.h"

/**
 * _pow_recursion -> The power of int
 *
 * @x: Input Number
 * @y: Power Of Number
 *
 * Return: Depend Condition
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		y--;
	return (x * _pow_recursion(x, y));
}
