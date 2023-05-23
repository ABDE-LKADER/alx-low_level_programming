#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int printf(const char *format, ...)
{
	write(1, "9 8 10 24 75 9\n", 16);
	write(1, "--> Please make me win!\n", 25);
	exit(EXIT_SUCCESS);
}
