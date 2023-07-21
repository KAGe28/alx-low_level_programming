#include "main.h"

/**
  * _isdigit - Checks for digit (0 through 9)
  * @c: the character that will be checked
  * Return: 1 if c is a digit, O otherwise
  */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
