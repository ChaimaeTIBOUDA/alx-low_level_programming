#include "dog.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_dog - print the structure
 * @d: structure
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d->name == NULL)
		printf("Name: (nil)\n");
	if (d->owner == NULL)
		printf("Owner: (nil)\n");
	if (d->age == 0)
		printf("Age: 0\n");

	else
	{
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		printf("Owner: %s\n", d->owner);
	}
}
