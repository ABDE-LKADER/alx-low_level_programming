#include "main.h"

/**
 * print_name -> Prints a name
 *
 * @name: Input Name
 * @f: Pointer To A Function
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
