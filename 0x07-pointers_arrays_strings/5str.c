#include "main.h"
#include <stddef.h>

/**
  * _strstr - Entry point
  * @haystack: arg
  * @needle: arg
  * Retunr: char
  */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int k = -1;
	int ps = -1;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (ps == -1)
			{
				if (haystack[i] == needle[j])
				{
					ps = i;
					k = ps;
				}
				else
				{
					ps = -1;
					k = -1;
				}
				break;
			}
			else
			{
				k++;
				if (haystack[k] != needle[j])
				{
					ps = -1;
					k = -1;
					break;
				}
			}
		}

	}
	if (ps != -1)
	{
		return (&haystack[ps]);
	}
	else
	{
		return (NULL);
	}
}
