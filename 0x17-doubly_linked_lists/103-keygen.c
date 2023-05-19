#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * find -> Finds the biggest number
 * @a: array
 * @n: Array Size
 * Return: biggest number
 */

int find(int *a, int n)
{
	int i, big;

	big = a[0];
	for (i = 1; i < n; i++)
	{
		if (a[i] > big)
			big = a[i];
	}
	return (big);
}

/**
 * mult_char -> Multiplies each char of username
 * @usr: Username
 * @len: Username length
 * Return: Multiplied username
 */

int mult_char(char *usr, int len)
{
	int i, mult;

	mult = 1;
	for (i = 0; i < len; i++)
		mult *= usr[i];
	return (mult);
}

/**
 * gen_pass -> Generates a random char
 * @usr: Username
 * Return: Random char
 */

int gen_pass(char *usr)
{
	int i, len, mult, big, seed, key;
	int arr[4];

	len = 0;
	while (usr[len] != '\0')
		len++;
	srand(time(NULL));
	seed = rand();
	srand(seed);
	for (i = 0; i < 4; i++)
		arr[i] = rand();
	mult = mult_char(usr, len);
	big = find(arr, 4);
	key = (mult ^ big);
	return (key);
}

/**
 * main -> Entry point
 * @argc: Number of arguments
 * @argv: Arguments
 * Return: 0 on success, 1 on failure
 */

int main(int argc, char *argv[])
{
	int key;

	if (argc != 2)
	{
		printf("Usage: %s username\n", argv[0]);
		return (1);
	}
	key = gen_pass(argv[1]);
	printf("%d\n", key);
	return (0);
}
