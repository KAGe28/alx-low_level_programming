#include "dog.h"

/**
  * init_dog - initialize a variable of type struct
  * @d: a pointer to struct dog
  * @name: a pointer to a string
  * @age: a pointer to a float
  * @owner: a pointer to a string
  * Return: Nothing
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
