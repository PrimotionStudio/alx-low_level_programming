#include "main.h"

/**
  * _memcpy - Entry point
  * @dest: arg
  * @src: arg
  * @n: arg
  * Return: char
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
