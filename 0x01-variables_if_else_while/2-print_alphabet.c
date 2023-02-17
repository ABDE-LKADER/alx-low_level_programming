#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet;
	char lowercase;

	scanf("%c", &alphabet);
	if (alphabet >= 65 && alphabet <= 132)
	{
		lowercase = alphabet + 32;
		putchar(lowercase);
	}
	else
	{
		putchar(lowercase);
	}
		putchar('\n');
	return (0);
}
