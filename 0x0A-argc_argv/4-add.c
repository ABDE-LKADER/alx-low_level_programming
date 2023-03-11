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

	sin = 1;
	digit = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sin *= -1;
		else if (s[i] >= '0' && s[i] <= '9')
		{
			digit = (digit * 10) + (s[i] - '0');
		}
		else if (digit > 0)
			break;
	}
	return (digit * sin);
}

/**
 * main -> Program
 *
 * @argc: Size array argv
 * @argv: Array of size argc
 *
 * Return: Depend Condition
 */

int main(int argc, char **argv)
{
	int i;
	int j;
	int o;
	int num;
	int add;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] > '9' || argv[i][j] < '0')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	add = 0;
	for (o = 1; o < argc; o++)
	{
		num = _atoi(argv[o]);
		if (num >= 0)
			add += num;
	}
	printf("%d\n", add);
	return (0);
}
