#include "main.h"

/**
 * *_strcpy -> Copy String From Source Into Destinse
 *
 * @dest: Empty Input
 * @src: Input Source
 *
 * Return: Destinse String
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
