#include <stdlib.h>
#include "main.h"

/**
 * *array_range -> Creates an array of integers
 *
 * @min: Input Values
 * @max: Bytes Use
 *
 * Return: Depend Condition
 */

int *array_range(int min, int max)
{
	int *mal;
	int i;
	int l;

	if (min > max)
		return (NULL);
	l = max - min + 1;
	mal = (int *) malloc(l * sizeof(int));
	if (mal == NULL)
		return (NULL);
	for (i = 0; i < l; i++)
		mal[i] = min++;
	return (mal);

}
