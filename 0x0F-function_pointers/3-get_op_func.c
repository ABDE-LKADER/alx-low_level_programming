#include <string.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func -> Selects the correct function to perform the operation
 *
 * @s: Input Operation
 *
 * Return: Depend Condition
 */

int (*get_op_func(char *s))(int, int)
{
	int i;

	op_t ops[] = {
		{ "+", op_add }, { "-", op_sub }, { "*", op_mul },
		{ "/", op_div }, { "%", op_mod }, { NULL, NULL }
	};
	i = 0;
	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (0);
}
