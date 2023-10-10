#include <stdio.h>
#include "dog.h"

/**
  * free_dog - Frees dogs
  * @d: the dog to set free
  * Return: Nothing
  */

void free_dog(dog_t *d)
{
	free(d);
}
