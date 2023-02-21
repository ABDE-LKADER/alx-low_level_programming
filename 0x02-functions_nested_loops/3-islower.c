#include "main.h"

/**
 * _islower -> checks for a lowercase character
 *
 * @c: Character Of _islower
 *
 * Return: 1 and 0 (Condition)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
