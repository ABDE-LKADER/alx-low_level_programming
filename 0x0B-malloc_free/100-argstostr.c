#include <stdlib.h>
#include "main.h"

/**
 * *argstostr -> Concatenates all the arguments of your program
 *
 * @ac: Input Arg
 * @av: Input String
 *
 * Return: Depend Condition
 */

char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int k;
	int size;
	char *new;

	if (ac == 0 || av == NULL)
		return (NULL);
	size = ac;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
	}
	new = malloc(size * sizeof(char));
	if (new == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			new[k] = av[i][j];
			k++;
		}
		new[k] = '\n';
		k++;
	}
	return (new);
}
