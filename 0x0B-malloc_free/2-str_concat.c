#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * str_concat - Entry point
  * @s1: arg
  * @s2: arg
  * Return: ret
  */
char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	char *str;
	int i;
	int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = 0;
	len2 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	str = (char *) malloc(1 + (sizeof(char) * (len1 + len2)));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		str[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		str[(len1 + j)] = s2[j];
	}
	str[(len1 + len2)] = '\0';

	return (str);
}
