#include "function_pointers.h"

/**
 * int_index -> Searches for an integer
 *
 * @array: Input Array
 * @size: Array Size
 * @cmp: Pointer To Function
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int int_index;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i] == 1))
			return (int_index);
	}
	return (-1);
}
