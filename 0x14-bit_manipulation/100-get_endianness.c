#include "main.h"

/**
 * get_endianness -> Checks the endianness
 *
 * Return: Depend Condition
*/

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return ((int)*c);
}
