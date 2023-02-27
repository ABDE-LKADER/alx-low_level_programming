#include "main.h"

/**
 * print_rev -> Prints a string, in reverse
 *
 * @s: Input
 */

void print_rev(char *s)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}
	for (j = i; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
