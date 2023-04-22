#include "3-calc.h"
/**
  * get_op_func - returns a pointer to function corresponding with operator
  * @s: operator used as an argument
  * Return: the pointer to function which corresponds with operator
  */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{ "+", op_add },
	{ "-", op_sub },
	{ "*", op_mul },
	{ "/", op_div },
	{ "%", op_mod },
	{ NULL, NULL }
	};

	int k = 0;

	while (ops[k].op)
	{
		if (strcmp(ops[k].op, s) == 0)
			return (ops[k].f);
		k++;
	}
}
