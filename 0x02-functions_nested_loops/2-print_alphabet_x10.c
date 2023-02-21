#include "main.h"
/**
 * print_alphabet_x10 -> for print lowercase alphabet 10 times
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

void print_alphabet_x10(void)
{
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
	print_alphabet();
}
