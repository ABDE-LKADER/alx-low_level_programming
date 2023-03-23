#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add -> Add a to b
 *
 * @a: First Input
 * @b: Second Input
 *
 * Return: Adds
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub -> Sub a to b
 *
 * @a: First Input
 * @b: Second Input
 *
 * Return: Subs
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul -> Multiple a to b
 *
 * @a: First Input
 * @b: Second Input
 *
 * Return: Multiple
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div -> Division a to b
 *
 * @a: First Input
 * @b: Second Input
 *
 * Return: Division
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod -> Mod a to b
 *
 * @a: First Input
 * @b: Second Input
 *
 * Return: Mod
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
