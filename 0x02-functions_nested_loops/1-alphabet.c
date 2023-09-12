#ifndef _PUTCHAR
#define _PUTCHAR
#include "main.h"
#endif

/**
  * print_alphabet - Used to print from a to z in lower case
  *
  * Return: none
  */
void print_alphabet(void)
{
	char start = 'a';
	char end = 'z';

	while (start <= end)
	{
		_putchar(start);
		start++;
	}

	_putchar('\n');

}
