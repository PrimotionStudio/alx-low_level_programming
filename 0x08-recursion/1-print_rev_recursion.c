#include "main.h"

/**
  * _print_rev_recursion - Entry point
  * @s: arg
  */
void _print_rev_recursion(char *s)
{
	int arrayLength = sizeof(*s) / sizeof(*(s + 0));

	int lastIndex = arrayLength - 1;
	if (*s == '\0')
	{
		return;
	}

	_putchar(*(s + lastIndex));
	lastIndex -= 1;
	_print_rev_recursion(&s[lastIndex]);
}
