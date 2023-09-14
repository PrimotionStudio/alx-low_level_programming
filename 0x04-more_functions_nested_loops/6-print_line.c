#include "main.h"

/**
  * print_line - print numbers from 0 to 9
  * @n: argument
  */
void print_line(int n)
{
	int c;

	if (n > 0)
	{
		for (c = 1; c <= n; c++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
