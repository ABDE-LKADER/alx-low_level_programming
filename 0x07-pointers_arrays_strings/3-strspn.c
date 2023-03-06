#include "main.h"

/**
 * _strspn -> Gets the length of a prefix substring
 *
 * @s: Input
 * @accept: Input
 *
 * Return: Depend Condition
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int bytes;

	bytes = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != ' ')
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					bytes++;
			}
		}
		else
			return (bytes);
	}
	return (bytes);
}
