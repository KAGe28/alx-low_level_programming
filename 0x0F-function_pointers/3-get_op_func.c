#include "3-calc.h"

/**
  * get_op_func - selects the correct function
  * @s: the operator
  * Description: Selects the correct function to perform
  * the operation asked by the user
  * Return: a pointer to the operator given as a parameter
  */

int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[s] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;
}
