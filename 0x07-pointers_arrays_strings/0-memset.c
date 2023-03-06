#include "main.h"

/**
 * *_memset -> Fill memory with a constant byte
 *
 * @s: Memory Area
 * @b: Value
 * @n: Byte Numbers
 *
 * Return: Pointer Memory Area
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
