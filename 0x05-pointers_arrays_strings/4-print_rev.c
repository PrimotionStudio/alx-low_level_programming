#include <string.h>
#include "main.h"

/**
  * print_rev - Entry point
  * @s: arg
  */
void print_rev(char *s)
{
	int i;
	size_t lenght = strlen(s);
	int len;

	len = lenght;

	for (i = 0; i < len; i++)
	{
		_putchar(s[len - i - 1]);
	}
	_putchar('\n');
}
