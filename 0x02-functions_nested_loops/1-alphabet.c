#include "main.h"
/**
 * print_alphabet -> for print lowercase alphabet
 */

void print_alphabet(void)
{
	char Start;

	Start = 'a';
	while (Start <= 'z')
	{
		_putchar(Start);
		Start++;
	}
	_putchar('\n');
}
