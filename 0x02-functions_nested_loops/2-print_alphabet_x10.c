#include "main.h"
/**
 * print_alphabet_x10 -> for print lowercase alphabet 10 times
 */

void print_alphabet_x10(void)
{
	char Start;
	int i;

	i = 0;
	while (i < 10)
	{
		Start = 'a';
		while (Start <= 'z')
		{
			_putchar(Start);
			Start++;
		}
		_putchar('\n');
		i++;
	}
}
