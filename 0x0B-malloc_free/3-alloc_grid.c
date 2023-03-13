#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid -> 2 dimensional array of integers
 *
 * @width: Input Gird With
 * @height: Input Gird Height
 *
 * Return: Depend Condition
 */

int **alloc_grid(int width, int height)
{
	int h;
	int w;
	int **sp;

	if (width <= 0 || height <= 0)
		return (NULL);
	sp = (int **) malloc(height * sizeof(int *));
	if (sp == NULL)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		sp[h] = (int *) malloc(width * sizeof(int));
		if (sp[h] == NULL)
		{
			for (; h >= 0; h--)
			{
				free(sp[h]);
			}
			free(sp);
			return (NULL);
		}
	}
	for (h = 0; h < height; h++)
	{
		for (w = 0; w < width; w++)
		{
			sp[h][w] = 0;
		}
	}
	return (sp);
}
