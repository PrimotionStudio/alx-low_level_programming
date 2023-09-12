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
	if (num < 0)
	{
		num *= -1;
	}

	_putchar((num % 10) + '0');
	return (num % 10);
}
