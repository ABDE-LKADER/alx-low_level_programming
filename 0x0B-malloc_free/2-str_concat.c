#include <stdlib.h>
#include "main.h"

/**
 * *str_concat -> Allocate Space Of s1 + s2
 *
 * @s1: Input First
 * @s2: Input Second
 *
 * Return: Depend Condition
 */

char *str_concat(char *s1, char *s2)
{
	int i;
	int j;
	int k = 0;
	int len;
	int len1;
	int len2;
	char *new;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	len = len1 + len2;
	new = (char *) malloc(len * sizeof(char));
	if (new == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++, k++)
	{
		new[k] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++, k++)
	{
		new[k] = s2[j];
	}
	new[k] = '\0';
	return (new);
}
