#include "main.h"

/**
 * _puts_recursion -> Prints a string, followed by a new line.
 *
 * @s: Input
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
}
