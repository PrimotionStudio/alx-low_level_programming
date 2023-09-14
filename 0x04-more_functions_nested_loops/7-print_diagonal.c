#include "main.h"

/**
  * print_line - print numbers from 0 to 9
  * @n: argument
  */
void print_line(int n)
{
	int i;
	int j;

	for (i = 1; i <= n; i++)
	{
		for (j = 2; j <= i; j++)
		{
			putchar(' ');
		}

		if (i != 5)
		{
			putchar('\\');
			putchar('\n');
		}
		else
		{
			putchar('\\');
		}
	}
}
