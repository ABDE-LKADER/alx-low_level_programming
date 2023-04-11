#include "main.h"

/**
 * _putchar -> Prints a character
 *
 * @c: Input Character
 *
 * Return: 1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
