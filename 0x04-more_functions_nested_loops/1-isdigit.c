#include "main.h"

/**
 * _isdigit -> Checks for digit 0 - 9
 *
 * @c: Input
 *
 * Return: 0 or 1 (Condition)
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
