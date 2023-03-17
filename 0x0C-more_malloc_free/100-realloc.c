#include <stdlib.h>
#include "main.h"

/**
  * _realloc -> Reallocates a memory block using malloc and free
  *
  * @ptr: Input Pointer
  * @old_size: Size Bytes Allocated
  * @new_size: New Size Bytes
  *
  * Return: Depend Condition
  */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new = (char *) malloc(new_size);
		if (new == NULL)
			return (NULL);
	}
	if (new_size > old_size && (ptr != NULL))
	{
		new = (char *) malloc(new_size);
		if (new == NULL)
			return (new);
		for (i = 0; i < old_size; i++)
			new[i] = *((char *)ptr + 1);
		free(ptr);
	}
	return (new);
}
