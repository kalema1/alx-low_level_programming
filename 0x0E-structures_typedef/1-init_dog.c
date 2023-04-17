#include <stdlib.h>
#include "dog.h"

/**
* init_dog - initialize dog variables
* @d: pointer
* @name: dog name
* @age: dog age
* @owner: dog owner
*
* Return: no value
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
