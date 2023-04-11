#include "main.h"

/**
 * clear_bit -> Sets the value of a bit to 0 at a given index
 *
 * @n: Input Number
 * @index: Input Index
 *
 * Return: Depend Condition
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int num = 1;

	if (index > 63)
		return (-1);
	num <<= index;
	*n = *n & ~num;
	return (1);
}
