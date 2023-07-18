#define MAIN_H "main.h"

/* more headers goes there */

/* betty style doc for function main goes there */
/**
  * print_alphabet - Prints the alphabet in lowercase
  *
  * Return: void
  */
/**
  * _putchar - Writes the character c to stdout
  * @c: the character
  * Return: c
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

void print_alphabet(void)
{
	int i;
	for (i = 97; i <= 122; i++)
	       _putchar(i);
	_putchar('\n');
}
