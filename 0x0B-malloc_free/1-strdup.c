#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * _strdup - Entry point
  * @str: arg
  * Return: char
  */
char *_strdup(char *str)
{
	int i;
	char *s;
	int len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*str != '\0')
	{
		len++;
		str++;
	}
	i = 0;
	while (i < len)
	{
		str--;
		i++;
	}

	s = (char *) malloc((len + 1) * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
	s[len] = '\0';

	return (s);
}
