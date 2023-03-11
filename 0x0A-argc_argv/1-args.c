#include <stdio.h>

/**
 * main -> Program
 *
 * @argc: Size array argv
 * @argv: Array of size argc
 *
 * Return: 0 Always
 */

int main(int argc, char **argv __attribute__((unused)))
{
	int num;

	num = argc - 1;
	printf("%d\n", num);
	return (0);
}
