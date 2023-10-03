#include "main.h"
#include <stdio.h>

/**
  * _strncpy - Entry point
  * @dest: arg1
  * @src: arg2
  * @n: arg3
  * Return: concatinated string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}

	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}

	return (dest);
}
