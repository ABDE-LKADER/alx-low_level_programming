#include <stdlib.h>
#include "main.h"

/**
 * *_strdup -> Newly allocated space in memory
 *
 * @str: Input String
 *
 * Return: Depend Condition
 */

char *_strdup(char *str)
{
	int i;
	int len;
	char *new;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	if (len == 0)
		return (NULL);
	new = (char *) malloc(len * sizeof(char));
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		new[i] = str[i];
	}
	return (new);
}
