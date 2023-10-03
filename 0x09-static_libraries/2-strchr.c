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
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}

	return (NULL);
}
