#include "main.h"

/**
 * *cap_string ->  Capitalizes All Words Of String
 *
 * @str: Input String
 *
 * Return: String
 */

char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i - 1] < '0' || str[i - 1] == '9') && (str[ i- 1] < 'A' || str[i - 1] > 'Z') && (str[i - 1] < 'a' || str[i - 1] > 'z'))
			str[i] -= 32;
		else
			str[0] -= 32;
	}
	return (str);
}
