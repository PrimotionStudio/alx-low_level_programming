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
	int spos;
	
	while (src[slen] != 0)
	{
		slen++;
	}

	if (n < slen)
	{
		for (spos = 0; spos < n; spos++)
		{
			if (src[spos] != '\0')
			{
				dest[spos] = src[spos];
			}
		}
	}
	else
	{
		spos = 0;
		while (src[spos] != '\0')
		{
			dest[spos] = src[spos];
			spos++;
		}
	}

	dest[slen] = '\0';

	return (dest);
}
