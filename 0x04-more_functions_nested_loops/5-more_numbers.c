#include "main.h"

/**
  * more_numbers - print numbers from 0 to 14
  */
void more_numbers(void)
{
	int c;
	int i = 1;

	while (i <= 10)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
			{
				_putchar((c / 10) + '0');
			}
			_putchar((c % 10) + '0');
		}
		_putchar('\n');
		i++;
	}
}
