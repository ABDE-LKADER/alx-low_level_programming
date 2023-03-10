#include <stdio.h>

/**
 * main -> Program
 *
 * @argc: Size array argv
 * @argv: Array of size argc
 *
 * Return: 0 Always
 */

int main (int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
