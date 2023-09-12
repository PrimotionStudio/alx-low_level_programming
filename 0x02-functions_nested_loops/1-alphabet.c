#ifndef _PUTCHAR
#define _PUTCHAR
#include "main.h"
#endif

int print_alphabet(void)
{
	char start = 'a';
	char end = 'z';

	while (start <= end)
	{
		_putchar(start);
	}

	return (0);
}
