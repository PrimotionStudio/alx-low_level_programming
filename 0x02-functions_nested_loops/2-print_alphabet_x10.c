#ifndef _PUTCHAR
#define _PUTCHAR
#include "main.h"
#endif

/**
  * print_alphabet_x10 - Used to print from a to z in lower case 10 times
  *
  * Return: none
  */
void print_alphabet_x10(void)
{
	char start = 'a';
	char end = 'z';
	int i = 1;

	while (i <= 10)
	{
		while (start <= end)
		{
			_putchar(start);
			start++;
		}

		_putchar('\n');
		start = 'a';

		i++;
	}

}
