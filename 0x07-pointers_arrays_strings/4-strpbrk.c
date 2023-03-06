#include "main.h"

/**
 * *_strpbrk -> Searches a string for any of a set of bytes
 *
 * @s: Input Search
 * @accept: For Input
 *
 * Return: Depend Condition
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}
	return ('\0');
}
