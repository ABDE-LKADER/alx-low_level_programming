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
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	}
	for (i = 1; str[i] != '\0'; i++)
	{
		if (((str[i - 1] < 'A' || str[i - 1] > 'Z')
				&& (str[i - 1] < 'a' || str[i - 1] > 'z')
				&& (str[i - 1] < '0' || str[i - 1] > '9'))
				&& (str[i] >= 'a' && str[i] <= 'z'))
			str[i] -= 32;
	}
	str[0] -= 32;
	return (str);
}
