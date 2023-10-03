#include "main.h"
#include <stdio.h>

/**
  * _strcat - Entry point
  * @dest: arg1
  * @src: arg2
  * Return: concatinated string
  */
char *_strcat(char *dest, char *src)
{
	int dlen = 0;
	int slen = 0;

	while (dest[dlen] != '\0')
	{
		dlen++;
	}

	while (src[slen] != '\0')
	{
		dest[dlen] = src[slen];
		dlen++;
		slen++;
	}
	dest[dlen] = '\0';

	return (dest);
}
