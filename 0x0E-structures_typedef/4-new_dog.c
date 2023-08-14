#include "dog.h"

/**
  * new_dog - creates a new dog
  * @name: a pointer to a string
  * @age: a float
  * @owner: a pointer to a string
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *nd = NULL;

	nd = malloc(sizeof(dog_t));

	if (nd == NULL)
		return (NULL);

	nd->name = name;
	nd->age = age;
	nd->owner = owner;
	free(nd);
	return (nd);
}
