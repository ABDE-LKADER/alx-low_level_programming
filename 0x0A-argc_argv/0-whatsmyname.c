#include <stdio.h>

/**
 * main -> Program
 *
 * @argc: Size array argv
 * @argv: Array of size argc
 *
 * Return: 0 Always
 */

int main(int argc __attribute__((unused)), char **argv)
{
	argc = 0;
	printf("%s\n", argv[argc]);
	return (0);
}
