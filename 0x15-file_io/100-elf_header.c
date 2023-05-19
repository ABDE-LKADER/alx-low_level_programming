#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	i = _strlen(str);
	printf("%d\n", i);
	return (0);
}
