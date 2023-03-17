#include <stdlib.h>
#include "main.h"

/**
 * *_calloc -> Allocates memory for an array
 *
 * @nmemb: Input Array
 * @size: Size Elements
 *
 * Return: Depend Condition
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int m;
	void *a;
	char *b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = nmemb * size;
	a = (void *) malloc(m);
	if (a == NULL)
		return (NULL);
	b = a;
	for (i = 0; i < m; i++)
		b[i] = '\0';
	return (a);
}
