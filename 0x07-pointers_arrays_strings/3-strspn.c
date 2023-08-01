#include "main.h"

/**
  * _strlen - returns the length of a string
  * @s: a pointer to a char
  * Return: length of s
  */

int _strlen(char *s)
{
	int i;
	int l = 0;

	for (i = 0; s[i] != '\0'; i++)
		l += 1;
	return (l);
}

/**
  * _strspn - Gets the length of a prefic substring
  * @s: a pointer to the string in which the character is looked for
  * @accept: the character to be found
  * Return: the number of bytes in initial segments of s
  */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int l1;
	int l2;
	unsigned int n;

	n = 0;
	l1 = _strlen(s);
	l2 = _strlen(accept);

	if (l1 == 0 || l2 == 0)
		return (0);

	for (i = 0; i <= l1; i++)
	{
		for (j = 0; j < l2; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}
		if (j == l2)
		{
			break;
		}
	}
	return (n);
}
