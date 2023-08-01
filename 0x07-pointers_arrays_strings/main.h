#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

#ifndef NULL
#define NULL ((void*)0)
#endif

int _putchar(char c);
int _strlen(char *s);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_cheesboard(char (*a)[8]);
void print_diagsums(int *a, int size);

#endif /* MAIN_H */
