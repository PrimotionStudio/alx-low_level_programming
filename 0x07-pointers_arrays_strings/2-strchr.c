#include <stddef.h>
#include "main.h"

/**
  * _strchr - Entry point
  * @s: arg
  * @c: arg
  * Return: char
  */
char *_strchr(char *s, char c)
{
	int i = 1;
	int j = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	while (j < i)
	{
		if (s[j] == c)
		{
			return (&s[j]);
		}

		j++;
	}

	return (NULL);
}
