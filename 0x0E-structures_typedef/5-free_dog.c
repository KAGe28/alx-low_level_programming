#include "dog.h"

/**
  * free_dog - frees dogs
  * @d: a pointer to type struct dog
  * Return: Nothing
  */

void free_dog(dog_t *d)
{
	free(d);
}
