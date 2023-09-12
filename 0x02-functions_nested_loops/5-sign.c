#ifndef _PUTCHAR
#define _PUTCHAR
#include "main.h"
#endif

/**
  * print_sign - Used to tell is a sign is greater, lesser or equal to zero
  * @n: The argument being checked
  * Return: 0, 1, -1 (Based on the condition)
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
