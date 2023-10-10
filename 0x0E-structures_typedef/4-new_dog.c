#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
  * new_dog - Entry Point
  * @name: arg
  * @age: arg
  * @owner: arg
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
		return (NULL);
	ndog->name = name;
	ndog->age = age;
	ndog->owner = owner;
	return (ndog);
}
