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
	if (len % 2 == 0)
	{
		n = len / 2;
	}
	else
	{
		n = (len - 1) / 2;
		n++;
	}
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
