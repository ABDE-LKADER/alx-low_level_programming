#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * find_first -> Finds the biggest number
 * @array: Int Array
 * @size: Array Size
 * Return: Biggest Number
 */

int find_first(int *array, int size)
{
	int i, first = 0;

	for (i = 0; i < size; i++)
	{
		if (array[i] > first)
			first = array[i];
	}
	return (first);
}

/**
 * find_second -> Finds the second biggest number
 * @array: Int Array
 * @size: Array Size
 * Return: Second Biggest Number
 */

int find_second(int *array, int size)
{
	int i, first = 0, second = 0;

	for (i = 0; i < size; i++)
	{
		if (array[i] > first)
		{
			second = first;
			first = array[i];
		}
		else if (array[i] > second && array[i] != first)
			second = array[i];
	}
	return (second);
}

/**
 * find_third -> Finds the third biggest number
 * @array: Int Array
 * @size: Array Size
 * Return: Third Biggest Number
 */

int find_third(int *array, int size)
{
	int i, first = 0, second = 0, third = 0;

	for (i = 0; i < size; i++)
	{
		if (array[i] > first)
		{
			third = second;
			second = first;
			first = array[i];
		}
		else if (array[i] > second && array[i] != first)
		{
			third = second;
			second = array[i];
		}
		else if (array[i] > third && array[i] != second && array[i] != first)
			third = array[i];
	}
	return (third);
}

/**
 * find_fourth -> Finds the fourth biggest number
 * @array: Int Array
 * @size: Array Size
 * Return: Fourth Biggest Number
 */

int find_fourth(int *array, int size)
{
	int i, first = 0, second = 0, third = 0, fourth = 0;

	for (i = 0; i < size; i++)
	{
		if (array[i] > first)
		{
			fourth = third;
			third = second;
			second = first;
			first = array[i];
		}
		else if (array[i] > second && array[i] != first)
		{
			fourth = third;
			third = second;
			second = array[i];
		}
		else if (array[i] > third && array[i] != second && array[i] != first)
		{
			fourth = third;
			third = array[i];
		}
		else if (array[i] > fourth && array[i] != third && array[i] != second
			 && array[i] != first)
			fourth = array[i];
	}
	return (fourth);
}

/**
 * main -> Generates a random password
 * Return: 0
 */

int main(void)
{
	int i, first, second, third, fourth, sum = 0, size = 0;
	int array[100];

	srand(time(NULL));
	while (sum < 2772)
	{
		array[size] = rand() % 100;
		sum += array[size];
		size++;
	}
	sum -= 2772;
	array[size - 1] -= sum;
	first = find_first(array, size);
	second = find_second(array, size);
	third = find_third(array, size);
	fourth = find_fourth(array, size);
	printf("%c%c%c%c\n", first, second, third, fourth);
	return (0);
}
