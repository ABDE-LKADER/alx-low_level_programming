#include "main.h"

/**
 * *_strncat -> Appends Selected Number Elements src string to the dest string
 *
 * @dest: Destination Input
 * @src: Source Input
 * @n: Number Elements
 *
 * Return: Destination
 */

char *_strncat(char *dest, char *src, int n)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; dest[j] != '\0' && j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
