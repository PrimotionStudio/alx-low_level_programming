#include "main.h"

/**
  * _memset - Entry point
  * @s: arg
  * @b: arg
  * @n: arg
  * Return: char
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
