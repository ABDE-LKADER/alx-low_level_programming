#include "main.h"

/**
 * _print_rev_recursion -> Prints a string in reverse.
 *
 * @s: Input
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		s++;
		_print_rev_recursion(s);
		_putchar(*s);
	}
	if (*s == '\n')
		_putchar('\n');
}
