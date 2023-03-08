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
		s--;
	}
	if (*s == '\n')
	{
		_putchar('\0');
	}
	if (s[0 + 1] == 'C')
	{
		_putchar('\0');
		_putchar('\n');
	}
}
