#include "dog.h"

/**
  * free_dog - frees dogs
  * @d: a pointer to type struct dog
  */

void free_dog(dog_t *d)
{
	free(d);
}
