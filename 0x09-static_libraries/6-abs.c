#ifndef _PUTCHAR
#define _PUTCHAR
#include "main.h"
#endif

/**
  * _abs - Function to get the absolute value of the params
  * @num: number whose absolute value i'm getting
  *
  * Return: absolute value of num
  */
int _abs(int num)
{
	if (num >= 0)
	{
		return (num);
	}
	else
	{
		return (num * -1);
	}
}
