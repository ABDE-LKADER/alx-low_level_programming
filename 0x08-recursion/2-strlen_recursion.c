#include "main.h"

/**
 * _strlen_recursion ->  Length of a string
 *
 * @s: Input
 *
 * Return:  The length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	s++;
	return (_strlen_recursion(s) + 1);
}
