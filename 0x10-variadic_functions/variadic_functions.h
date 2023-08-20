#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#ifndef NULL
#define NULL ((void *)0)
#endif

int _putchar(char c);
int _strlen(char *s);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
#endif /* MAIN_H */