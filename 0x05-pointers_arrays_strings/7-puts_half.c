#include "main.h"

/**
 * puts_half -> Prints last half of a string
 *
 * @str: Input
 */

void puts_half(char *str)
{
	int len;
	int n;

	for (len = 0; str[len] != '\0'; len++)
	{
		continue;
	}
	n = len / 2;
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
