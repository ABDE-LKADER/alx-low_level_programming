#include <stdlib.h>
#include <stdio.h>

/**
 * op_codes -> Print the opcodes
 *
 * @a: Input Address
 * @n: Bytes Number
 */

void op_codes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i]);
		if (i < n - 1)
			printf(" ");
	}
	printf("\n");
}

/**
 * main - Prints the opcodes of its own main function
 *
 * @ac: Input Arg
 * @av: Input String
 *
 * Return: Always 0
 */

int main(int ac, char **av)
{
	int x;

	if (ac != 2)
	{
		printf("Error\n");
		exit(1);
	}
	x = atoi(av[1]);
	if (x < 0)
	{
		printf("Error\n");
		exit(2);
	}
	op_codes((char *) &main, x);
	return (0);
}
