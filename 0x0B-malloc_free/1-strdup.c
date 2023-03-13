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

	if (str == NULL)
		return (NULL);
	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	new = (char *) malloc(len * sizeof(char));
	if (new == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		new[i] = str[i];
	}
	new[i] = '\0';
	return (new);
}
