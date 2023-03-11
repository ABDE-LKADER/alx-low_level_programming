#include "main.h"

/**
 * *_memcpy -> Copy memory area
 *
 * @dest: Destination
 * @src: Source
 * @n: Byte Numbers
 *
 * Return: Destination
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
