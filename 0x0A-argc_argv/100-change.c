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
	num = _atoi(argv[1]);
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
			num -= coins[i];
		}
	}

	printf("%d\n", l);
	return (0);
}
