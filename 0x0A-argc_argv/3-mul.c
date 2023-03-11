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
	int a;
	int b;
	int mult;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	a = _atoi(argv[1]);
	b = _atoi(argv[2]);
	mult = a * b;
	printf("%d\n", mult);
	return (0);
}
