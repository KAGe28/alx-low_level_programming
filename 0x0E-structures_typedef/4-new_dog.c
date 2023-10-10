#include "dog.h"

/**
  * _strcpy- copies the string pointed to by src to dest
  * @dest: a pointer to a character dest
  * @src: a pointer to a character src
  * Return: the pointer to dest
  */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i) != '\0')
	{
		*(dest + i) = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
  * new_dog - Creates a new dog
  * @name: name of dog
  * @age: age of the dog
  * @owner: owner's name of the dog
  * Return: a pointer to a dog
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog = NULL;
	char *name_cpy, *owner_cpy;

	if (name == NULL)
		return (NULL);
	if (owner == NULL)
		return (NULL);
	my_dog = malloc(sizeof(dog_t));

	name_cpy = _strcpy(name);
	owner_cpy = _strcpy(owner);

	my_dog->name = name;
	my_dog->age = age;
	my_dog->owner = owner;

	return (my_dog);
}
