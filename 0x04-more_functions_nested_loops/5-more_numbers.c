#include "main.h"

/**
  * more_numbers - print numbers from 0 to 14
  */
void more_numbers(void)
{
	char c;
	int i = 1;

	while (i <= 10)
	{
		for (c = '0'; c <= '14'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		i++;
	}
}
