#include "dog.h"

/**
  * print_dog - print a struct dog
  * @d: a pointer to struct dog
  * Return: Nothing
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("\n");
	}
	else
	{
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		if (d->age > 0)
		{
			printf("Name: %s\n", d->name);
			printf("Age: %f\n", d->age);
			printf("Owner: %s\n", d->owner);
		}
		else
		{
			printf("Name: %s\n", d->name);
			printf("Age: %s\n", "(nil)");
			printf("Owner: %s\n", d->owner);
		}
	}
}
