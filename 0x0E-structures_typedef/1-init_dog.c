#include "dog.h"

/**
  * init_dog - Initialize a variable of type struct dog
  * @d: a dog
  * @name: name of dog
  * @age: age of the dog
  * @owner: owner's name of the dog
  * Return: Nothing
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
