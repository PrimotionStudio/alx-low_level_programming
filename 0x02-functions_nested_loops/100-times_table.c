#ifndef _PUTCHAR
#define _PUTCHAR
#include "main.h"
#endif

/**
  * print_times_table - Entry point
  */
void print_times_table(int n)
{
	int num1;
	int num2;
	int product;

	for (num1 = 0; num1 <= n; num1++)
	{
		for (num2 = 0; num2 <= n; num2++)
		{
			product = num1 * num2;

			if (num2 == 0)
			{
				_putchar('0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				if (product <= n)
				{
					_putchar(' ');
				}
				else
				{
					_putchar((product / 10) + '0');
				}
				_putchar((product % 10) + '0');
			}
		}
		_putchar('\n');

	}
}
