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
	int slen = 0;
	int i = 0;

	while (src[i] != '\0')
	{
		i++;
	}
	if (n < i)
	{
		for (; slen < n; slen++)
		{
			if (src[slen] != '\0')
			{
				dest[slen] = src[slen];
				slen++;
			}
		}
	}
	else
	{
		while (src[slen] != '\0')
		{
			dest[slen] = src[slen];
			slen++;
		}
	}
	dest[slen] = '\0';

	return (dest);
}
