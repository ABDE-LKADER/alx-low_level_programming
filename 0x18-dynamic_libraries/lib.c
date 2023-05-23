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
	write(1, "9 8 10 24 75 - 9\n", 18);
	write(1, "Congratulations, you win the Jackpot!\n", 39);
	exit(EXIT_SUCCESS);
}
