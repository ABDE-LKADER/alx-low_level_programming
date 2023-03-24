#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
* print_char - Prints a char
* @arg: Args List
*/

void print_char(va_list arg)
{
	char alpha;

	alpha = va_arg(arg, int);
	printf("%c", alpha);
}

/**
* print_int - Prints an int.
* @arg: Args List
*/

void print_int(va_list arg)
{
	int num;

	num = va_arg(arg, int);
	printf("%d", num);
}


/**
* print_float - Prints a float.
* @arg: Args List
*/

void print_float(va_list arg)
{
	float digit;

	digit = va_arg(arg, double);
	printf("%f", digit);
}

/**
* print_string - Prints a string.
* @arg: Args List
*/

void print_string(va_list arg)
{
	char *str;

	str = va_arg(arg, char *);
	if (str != NULL)
	{
		printf("%s", str);
		return;
	}
	printf("(nil)");
}

/**
 * print_all -> Prints anything
 * @format: Args List
 */

void print_all(const char * const format, ...)
{
	int i, j;
	char *separator = "";
	va_list list;

	to_string funcs[] = {
		{"c", print_char}, {"i", print_int}, {"f", print_float}, {"s", print_string}
	};

	va_start(list, format);
	i = 0;
	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(funcs[j].str)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			funcs[j].print(list);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
