#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array with data
 * @size: size of the array
 * @cmp: function pointer
 * Return: count of integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int int_index;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (i = 0; int_index < size; int_index++)
	{
		if (cmp(array[int_index]) == 1)
			return (int_index);
	}
	return (-1);
}
