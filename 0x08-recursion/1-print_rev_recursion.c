#include <stdio.h>

/**
  * _print_rev_recursion - prints a string in reverse
  * @s: a pointer to a char
  * Return: nothing
  */

void _print_rev_recursion(char *s)
{
	int l = strlen(s);

	if (l == 0)
	{
		return;
	}
	putchar(s[l-1]);
	_print_rev_recursion(s - );
}
