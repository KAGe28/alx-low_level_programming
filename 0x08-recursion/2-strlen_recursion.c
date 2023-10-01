#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: The string
 * Return: length of s.
 */

int _strlen_recursion(char *s)
{
	int l;

	l = 0;

	if (s[l] == '\0')
	{
		return (0);
	}
	l++;
	return (l + _strlen_recursion(s + 1));
}
