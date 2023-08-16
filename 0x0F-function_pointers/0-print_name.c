#include "function_pointers.h"

/**
  * print_name - Prints a name
  * @name: name of the person
  * @f: a pointer to a function void
  * Return: Nothing
  */

void print_name(char *name, void (*f)(char *))
{
	void (*fun)(char *);

	fun = f;

	if (name == NULL)
		exit(EXIT_FAILURE);
	fun(name);
}
