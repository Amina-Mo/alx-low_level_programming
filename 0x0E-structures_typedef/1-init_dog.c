#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * init_dog - initializes a structure
 * @d: structure
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int namelen = 0;
	int ownerlen = 0;
	int i = 0;

	while (name[namelen] != '\0')
	{
		namelen++;
	}
	while (owner[ownerlen] != '\0')
	{
		ownerlen++;
	}
	d->name = malloc(namelen + 1);
	d->owner = malloc(ownerlen + 1);
	for (i = 0; i <= namelen; i++)
	{
		d->name[i] = name[i];
	}
	for (i = 0; i <= ownerlen; i++)
	{
		d->owner[i] = owner[i];
	}
	d->age = age;
}

