#include "main.h"
#include <stdlib.h>

/**
 * *create_array ->Create array
 *
 * @size: Input Array
 * @c: Input String
 *
 * Return: Depend Condition
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);
	arr = (char *) malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
