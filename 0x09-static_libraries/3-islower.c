#ifndef _PUTCHAR
#define _PUTCHAR
#include "main.h"
#endif

/**
  * _islower - Used to check if letter are lowercase or not
  * @c: is a single character argument pass to this function
  *
  * Return: 1 if c is lowercase or 0 if not
  */
int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
