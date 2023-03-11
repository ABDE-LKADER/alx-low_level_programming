#include <stdio.h>

/**
 * main -> Program
 *
 * @argc: Size array argv
 * @argv: Array of size argc
 *
 * Return: 0 Always
 */

int main(int argc, char **argv)
{
	int i;
	int l;
	int num;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	l = 0;
	for (i = 0; i < 5 && num >= 0; i++)
	{
		while (num >= coins[i])
		{
			l++;
			num -= coins[j];
		}
	}

	printf("%d\n", l);
	return (0);
}
