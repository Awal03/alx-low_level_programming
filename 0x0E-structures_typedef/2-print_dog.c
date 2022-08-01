#include "dog.h"
#include <stdio.h>

/**
  * print_dog - print struct dog
  * @d: struct dog
  *
  * Return: void
  */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (!(d->name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %d\n", d->age);

		if (!(d->owner))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->owner);
	}
}
