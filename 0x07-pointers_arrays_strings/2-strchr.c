#include "main.h"

/**
 * *_strchr -> Locate character in string
 *
 * @s: String
 * @c: Character
 *
 * Return: Depend Condition
 */

char *_strchr(char *s, char c)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			for (j = i; s[j] != '\0'; j++)
				return (s + j);
		}
	}
	return ('\0');
}
