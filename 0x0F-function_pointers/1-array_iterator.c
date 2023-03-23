#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator -> Excuted Function
 *
 * @array: Input Array
 * @size: Array Size
 * @action: Pointer To Function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	if (array == NULL || action == NULL)
		return:
	for (i = 0; i < (int)size; i++)
			action(array[i]);
}
