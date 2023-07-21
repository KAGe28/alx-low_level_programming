#include "main.h"

/**
  * _isupper - Checks for uppercase character
  * @c: the character that will be checked
  * Return: 1 if c is uppercase, O otherwise
  */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
