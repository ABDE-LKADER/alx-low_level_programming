#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int A;
	int B;
	int C;
	int D;

	A = 0;
	while (A <= 9)
	{
		B = 0;
		while (B <= 8)
		{
			C = 0;
			while (C <= 9)
			{
				D = 1;
				while (D <= 9)
				{
					putchar(A + '0');
					putchar(B + '0');
					putchar(' ');
					putchar(C + '0');
					putchar(D + '0');
					if (A < 9 || B < 8 || C < 9 || D < 9)
					{
						putchar(',');
						putchar(' ');
					}
					D++;
				}
				C++;
			}
			B++;
		}
		A++;

	}
	putchar('\n');
	return (0);
}
