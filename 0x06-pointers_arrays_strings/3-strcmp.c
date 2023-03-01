#include "main.h"

/**
 * _strcmp ->  Compares two strings
 *
 * @s1: First Input
 * @s2: Second Input
 *
 * Return: 0 Or Different (Condition)
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
