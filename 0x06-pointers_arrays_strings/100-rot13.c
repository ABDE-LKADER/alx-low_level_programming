#include "main.h"

/**
 * *rot13 -> Rot13 encode
 *
 * @str: Input String
 *
 * Return: String
 */

char *rot13(char *str)
{
	int	i;
	int	j;
	char *al = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *nb = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; str[j] != '\0'; j++)
		{
			if (str[i] == al[j])
			{
				str[i] = nb[j];
				break;
			}
		}
	}

	return (str);
}
