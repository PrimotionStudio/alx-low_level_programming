#include "main.h"

/**
  * _puts_recursion - Entry point
  * @c: arg
  */
void _puts_recursion(char *c)
{
	if (*c == '\0')
	{
		return;
	}
	_putchar(*(c + 0));
	_putchar('\n');
	_puts_recursion(&c[1]);
}
