#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b)
	{
		if (b > c)
		{
			largest = a;
		}
		else if (b == c)
		{
			largest = a;
		}
		else if (b < c)
		{
			if (a - c < 0)
			{
				largest = c;
			}
			else if (a - c > 0)
			{
				largest = a;
			}
		}
	}
	else if (a < b)
	{
		if (b > c)
		{
			largest = b;
		}
		else if (a == c)
		{
			largest = b;
		}
		else if (b < c)
		{
			if (a - c < 0)
			{
				largest = c;
			}
			else if (a - c > 0)
			{
				largest = b;
			}
			else
				largest = b;
		}
	}
	else
	{
		largest = c;
	}

	return (largest);
}
