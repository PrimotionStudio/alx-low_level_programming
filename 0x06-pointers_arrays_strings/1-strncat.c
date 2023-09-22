#include "main.h"
#include <stdio.h>

/**
  * _strncat - Entry point
  * @dest: arg1
  * @src: arg2
  * @n: arg3
  * Return: concatinated string
  */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0;
	int slen = 0;
	int i = 0;

	while (dest[dlen] != '\0')
	{
		dlen++;
	}

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
				dest[dlen] = src[slen];
				dlen++;
				slen++;
			}
		}
	}
	else
	{
		while (src[slen] != '\0')
		{
			dest[dlen] = src[slen];
			dlen++;
			slen++;
		}
	}
	dest[dlen] = '\0';

	return (dest);
}
