#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

#ifndef NULL
#define NULL ((void *)0)
#endif /* NULL */

/**
  * struct dog - a structure that define a dog
  * @name: name of the dog
  * @age: age of the dog
  * @owner: name of the owner
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

int _putchar(char c);
int _strlen(char *s);
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* MAIN_H */
