#include <stdlib.h>
#include "main.h"

/**
 * _words -> Number Of Words
 *
 * @str: Input String
 *
 * Return: Number Words
 */

int _words(char *str)
{
	int i, j, si;

	j = 0;
	si = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == ' ')
			si = 0;
		else if (si == 0)
		{
			si = 1;
			j++;
		}
	}
	return (j);
}

/**
 * **strtow -> Splits a string into words
 *
 * @str: Input String
 *
 * Return: Depend Condition
 */

char **strtow(char *str)
{
	char **new;
	char *res;
	int i, j, k, End, Start, len, words;

	for (len = 0; str[len] != '\0'; len++)
		;
	words = _words(str);
	if (words == 0)
		return (NULL);
	new = (char **) malloc((words + 1) * sizeof(char *));
	if (new == NULL)
		return (NULL);
	k = 0;
	j = 0;
	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (j)
			{
				End = i;
				res = (char *) malloc((j + 1) * sizeof(char));
				if (res == NULL)
					return (NULL);
				while (Start < End)
					*res++ = str[Start++];
				*res = '\0';
				new[k] = res - j;
				k++;
				j = 0;
			}
		}
		else if (j++ == 0)
			Start = i;
	}
	new[k] = NULL;
	return (new);
}
