#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>

#ifndef NULL
#define NULL ((void *)0)
#endif

/**
  * struct dog - define a dog
  * @name: Name of dog
  * @age: Age of dog
  * @owner: Owner's name of dog
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
