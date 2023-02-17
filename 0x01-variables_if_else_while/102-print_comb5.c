#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int First;
	int Second;

	First = 0;
	while (First < 99)
	{
		Second = First + 1;
		while (Second <= 99)
		{
			putchar(First / 10 + '0');
			putchar(First % 10 + '0');
			putchar(' ');
			putchar(Second / 10 + '0');
			putchar(Second % 10 + '0');
			if (First != 98)
			{
				putchar(',');
				putchar(' ');
			}
			Second++;
		}
		First++;
	}
	putchar('\n');
	return (0);
}
