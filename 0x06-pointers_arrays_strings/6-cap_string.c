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

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		if (str[i] == ' ' && str[i] == '\t' && str[i] == '\n' && str[i] == ',' && str[i] == ';' && str[i] == '.' && str[i] == '!' && str[i] == '?' && str[i] == '"' && str[i] == '(' && str[i] == ')' && str[i] == '{' && str[i] == '}')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= 32;
		}
	}
	return (str);
}
