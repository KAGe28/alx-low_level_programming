#include "function_pointers.h"

/**
  * print_name- Prints a name
  * @name: Name passed
  * @f: The function pointed
  * Return: Nothing
  */

void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		(f)(name);
}

