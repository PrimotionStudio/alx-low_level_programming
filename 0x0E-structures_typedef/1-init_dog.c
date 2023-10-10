#include <stdio.h>
#include "dog.h"

/**
  * init_dog - Entry Dog
  * @d: arg
  * @name: arg
  * @age: arg
  * @owner: arg
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
