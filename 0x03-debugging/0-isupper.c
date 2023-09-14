#ifndef _PUTCHAR
#define _PUTCHAR
#include "main.h"
#endif

/**
  * _isupper - Used to check if letter are uppercase or not
  * @c: is a single character argument pass to this function
  *
  * Return: 1 if c is uppercase or 0 if not
  */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
