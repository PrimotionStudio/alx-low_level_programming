#ifndef _PUTCHAR
#define _PUTCHAR
#include "main.h"
#endif

/**
  * _isalpha - Used to check if letter is an aplhabet or not
  * @c: is a single character argument pass to this function
  *
  * Return: 1 if c is lowercase or 0 if not
  */
int _isalpha(int c)
{
	if (((c >= 'A') && (c <= 'Z')) || ((c >= 'a') && (c <= 'z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
