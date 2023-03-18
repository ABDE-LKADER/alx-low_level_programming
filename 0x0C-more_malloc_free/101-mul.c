#include <stdlib.h>
#include <stdio.h>

/**
 * _atoi -> Convert string to integer
 *
 * @s: Input
 *
 * Return: Integer Converted
 */

int _atoi(char *s)
{
	int i;
	int sin;
	unsigned int digit;

	i = 0;
	sin = 1;
	digit = 0;
	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sin *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			digit = (digit * 10) + (s[i] - '0');
		}
		else if (digit > 0)
			break;
		i++;
	}
	return (digit * sin);
}

/**
 * main -> Entry
 *
 * @ac: Number Args
 * @av: Array String 2D
 *
 * Return: Depend Condition
 */

int main(int ac, char **av)
{
	int i;
	int j;
	unsigned int mul;
	int num1;
	int num2;

	if (ac != 3)
	{
		printf("Error\n");
		exit(98);
	}
	for (i = 1; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			if (av[i][j] < '0' || av[i][j] > '9')
			{
				printf("Error\n");
				exit(98);
			}
		}
	}
	num1 = _atoi(av[1]);
	num2 = _atoi(av[2]);
	mul = num1 * num2;
	printf("%u\n", mul);
	return (0);
}
