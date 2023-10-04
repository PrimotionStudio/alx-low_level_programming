#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * create_array - Entry point
  * @size: arg
  * @c: arg
  * Return: ret
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}
	array = (char *) malloc(sizeof(array) * size);
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
