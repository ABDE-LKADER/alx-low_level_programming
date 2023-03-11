#include "main.h"

/**
 * _isalpha -> checks for a alphabetic character
 *
 * @c: Character Of _isalpha
 *
 * Return: 1 and 0 (Condition)
 */

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' &&  c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
