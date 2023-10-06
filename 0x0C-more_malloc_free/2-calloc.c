#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * _calloc - Entry Point
  * @nmemb: arg
  * @size: arg
  * Return: void
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = (char *) malloc(nmemb * size);
	if (mem == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		mem[i] = '\0';
	return (mem);
}
