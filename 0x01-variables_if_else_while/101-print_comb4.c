#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int One;
	int Tow;
	int Tree;

	One = 0;
	while (One <= 9)
	{
		Tow = One + 1;
		while (Tow <= 9)
		{
			Tree = Tow + 1;
			while (Tree <= 9)
			{
				putchar(One + '0');
				putchar(Tow + '0');
				putchar(Tree + '0');
				if (One < 7)
				{
					putchar(',');
					putchar(' ');
				}
				Tree++;
			}
			Tow++;
		}
		One++;
	}
	putchar('\n');
	return (0);
}
