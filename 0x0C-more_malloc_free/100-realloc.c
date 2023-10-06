#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * _realloc - Entry point
  * @ptr: arg
  * @old_size: arg
  * @new_size: arg
  * Return: wevs
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	void *mem;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		mem = malloc(new_size);
		if (mem == NULL)
			return (NULL);
	}
	if (new_size < old_size)
	{
		mem = malloc(new_size);
		if (mem == NULL)
		{
			free(ptr);
			return (NULL);
		}
		for (i = 0; i < new_size; i++)
			((char *) mem)[i] = ((char *) ptr)[i];
		free(ptr);
	}
	if (new_size > old_size)
	{
		mem = malloc(new_size);
		if (mem == NULL)
		{
			free(ptr);
			return (NULL);
		}
		for (i = 0; i < old_size; i++)
			((char *) mem)[i] = ((char *) ptr)[i];
		free(ptr);
	}
	return (mem);
}
