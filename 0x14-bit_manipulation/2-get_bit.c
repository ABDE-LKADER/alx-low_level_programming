#include "main.h"

/**
 * get_bit -> Returns the value of a bit at a given index
 *
 * @n: Input Number
 *
 * @index: Index of the bit
 *
 * Return: Value Bit
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
