#include "main.h"

/**
 * *leet -> Leet encode
 *
 * @str: Input String
 *
 * Return: String
 */

char *leet(char *str)
{
	int	i;
	int	j;
	char *la = "aAeEoOtTlL";
	char *nb = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == al[j])
			{
				str[i] = nb[j];
			}
		}
	}

	return (str);
}
