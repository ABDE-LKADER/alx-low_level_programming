#include <stdio.h>

/**
 * main -> Program
 *
 * @argc: Size array argv
 * @argv: Array of size argc
 *
 * Return: 0 Always
 */

int main (int argc, char **argv)
{
	int i;

	i = 0;
	argc = 0;
	while(argv[argc][i] != '\0')
	{
		printf("%c", argv[argc][i]);
		i++;
	}
	printf("\n");
	return (0);
}
