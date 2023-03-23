#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main -> Output Program
 *
 * @ac: Input Number
 * @av: Input String
 *
 * Return: Always 0
 */

int main(int ac, char **av)
{
	int (*op)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = get_op_func(av[2]);
	if (!op)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", op(atoi(av[1]), atoi(av[3])));
	return (0);
}
