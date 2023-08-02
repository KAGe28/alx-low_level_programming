#include "main.h"
/**
  * _strlen_recursion : Returns the length of a string
  * @s: a pointer to a char
  * Return: length of s
  */

int _strlen_recursion(char *s)
{
	int l = 0;

	if (*s == '\0')
		return (0);
	l++;
	return (l + _strlen_recursion(s + 1));
}
