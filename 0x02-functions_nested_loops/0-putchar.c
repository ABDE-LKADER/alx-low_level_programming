#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Return: - Always 0 (Success)
 */

int main(void)
{
	char write[8] = "_putchar";
	int i;

	i = 0;
	while (i <= 7)
	{
		putchar(write[i]);
		i++;
	}
	return (0);
}
