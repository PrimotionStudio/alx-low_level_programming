#include <stdio.h>
#ifndef _PUTCHAR
#define _PUTCHAR
#include "main.h"
#endif

/**
  * print_to_98 - Entry point
  * @n: arg to be printed
  */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d, ", n);
		}
	}
	else
	{
		for (;n >= 98; n--)
		{
			printf("%d, ", n);
		}
	}
	printf("\n");
}
