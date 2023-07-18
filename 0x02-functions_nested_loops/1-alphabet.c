#define MAIN_H "main.h"
/* more headers goes there */

/* betty style doc for function main goes there */
/**
  * print_alphabet - Prints the alphabet in lowercase
  *
  * Return: void
  */

void print_alphabet(void)
{
	int i;
	for (i = 97; i <= 122; i++)
	       _putchar(i);
	putchar('\n');
}
