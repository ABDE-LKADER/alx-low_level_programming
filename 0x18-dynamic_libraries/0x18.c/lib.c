#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * printf -> Print the "Please make me win!" message
 * @format: String Format
 * Return: 0
*/

int printf(const char *format, ...)
{
	write(1, "--> Please make me win!\n", 25);
	exit(EXIT_SUCCESS);
}
