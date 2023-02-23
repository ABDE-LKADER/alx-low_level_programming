#include "main.h"

/**
 * _isupper -> Checks for uppercase character
 *
 * @c: Input character
 *
 * Return: 0 or 1 (Condition)
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
