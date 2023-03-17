#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat -> Concatenates two strings
 *
 * @s1: String One
 * @s2: String Tow
 * @n: Input Bytes - s2
 *
 * Return: Depend Condition
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new;
	unsigned int i;
	unsigned int j;
	unsigned int k;
	unsigned int len;
	unsigned int len1;
	unsigned int len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	if (n < len2)
	{
		k = n;
		len = len1 + n + 1;
	}
	else if (n >= len2)
	{
		k = len2;
		len = len1 + len2 + 1;
	}
	new = (char *) malloc(len * sizeof(char));
	if (new == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		new[i] = s1[i];
	for (j = 0; j < k; j++, i++)
		new[i] = s2[j];
	new[i] = '\0';
	return (new);
}
