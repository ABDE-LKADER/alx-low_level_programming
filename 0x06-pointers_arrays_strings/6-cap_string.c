#include "main.h"

/**
 * *cap_string ->  Capitalizes all words of string
 *
 * @str: Input String
 *
 * Return: String
 */

char *cap_string(char *str)
{
	int	i;
	int	j;
	char	wsp[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?',
				'"', '(', ')', '{', '}'};

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (str[i - 1] == wsp[j - 1])
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] -= 32;
				}
			}
		}
	}

	return (str);
}

