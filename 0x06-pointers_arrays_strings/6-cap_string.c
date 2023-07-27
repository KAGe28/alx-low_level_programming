#include "main.h"

/**
  * is_special - checks for special character
  * @c: the character that will be checked
  * Return: 1 if c is a special character, 0 otherwise
  */

int is_special(char c)
{
	int i;
	char specials[] = " \t\n,;.!\?\"(){}";

	for (i = 0; specials[i] != '\0'; i++)
	{
		if (c == specials[i])
			return (1);
	}
	return (0);
}

/**
  * cap_string - Capitalize all words of string
  * @s: a pointer to the string
  * Return: a pointer to the resulting string s
  */

char *cap_string(char *s)
{
	int i;
	int cap = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (cap && s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
		}
		cap = is_special(s[i]);
	}

	return (s);
}

