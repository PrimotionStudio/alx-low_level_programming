#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
  * string_nconcat - Entry point
  * @s1: arg
  * @s2: arg
  * @n: arg
  * Return: char
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i;
	unsigned int j;
	int len1 = 0;
	char *str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[len1] != '\0')
		len1++;
	str = malloc(len1 + n + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len1; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
		str[(len1 + j)] = s2[j];
	str[(len1 + n)] = '\0';
	return (str);
}
