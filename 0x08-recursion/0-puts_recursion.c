#include "mainh"

/**
  * _puts_recursion - prints a string
  * @s: a pointer to a char
  *Return: nothing
  */

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(s[i]);
	_puts_recursion(s +1);
}
