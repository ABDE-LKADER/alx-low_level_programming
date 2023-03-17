#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked -> Allocates memory using malloc
 *
 * @b: Input
 */

void *malloc_checked(unsigned int b)
{
	void *m;

	m = (void *) malloc(b);
	if (m == NULL)
		exit(98);
	return (m);
}
