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
	int ps = -1;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				if (ps == -1)
				{
					ps = j;
				}
				break;
			}
			else
			{
				ps = 0;
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
