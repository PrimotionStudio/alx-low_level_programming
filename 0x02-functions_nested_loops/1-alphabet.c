#ifndef _PUTCHAR
#define _PUTCHAR
#include "main.h"
#endif

void print_alphabet(void)
{
	char start = 'a';
	char end = 'z';

	while (start <= end)
	{
		_putchar(start);
	}

}
