#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -> Keygen for crackme5
 * @argc: Args Number
 * @argv: Args Array
 * Return: Depend Condition
 */

int main(int argc, char *argv[])
{
	char *username = argv[1];
	int len = 0, i = 0, sum = 0, mul = 1, first = 0, second = 0;
	time_t t;

	if (argc != 2)
		return (-1);
	while (username[len])
		len++;
	srand((unsigned int) time(&t));
	first = rand() & 0x3f;
	second = rand() & 0x3f;
	printf("%c%c", first, second);
	for (i = 0; i < len; i++)
	{
		sum += username[i];
		mul *= username[i];
	}
	printf("%c%c\n", sum, mul);
	return (0);
}
