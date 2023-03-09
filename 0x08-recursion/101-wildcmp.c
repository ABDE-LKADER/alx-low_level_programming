#include "main.h"

/**
 * wildcmp -> Compare string
 *
 * @s1: First Input
 * @s2: Scond Input
 *
 * Return: Depend Condition
 */

int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0')
		return (*s1 == '\0');
	if (*s2 == *s1)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	return (0);
}
