#ifndef _PUTCHAR
#define _PUTCHAR
#include "main.h"
#endif

/**
  * print_last_digit - Entry point
  * @num: Number whose last digit gets printed
  *
  * Return: num
  */
int print_last_digit(int num)
{
	int last_digit;

	if (num < 0)
	{
		num = -num;
	}

	last_digit = num % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}

	_putchar(last_digit + '0');
	return (last_digit);
}
