#include "main.h"

/**
 * binary_to_uint -> Converts a binary number to unsigned int
 *
 * @b: Input String Binary
 *
 * Return: Depending Condition
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, num = 0;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num = num * 2 + (b[i] - '0');
	}
	return (num);
}
