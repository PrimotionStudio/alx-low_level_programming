#include <string.h>
#include "main.h"

/**
  * puts_half - Entry point
  * @str: arg
  */
void puts_half(char *str)
{
	int i;
	size_t lenght = strlen(str);
	int len;

	len = lenght;

	for (i = 0; i < len; i++)
	{
		if (len % 2 == 0)
		{
			if (i >= (len / 2))
			{
				_putchar(str[i]);
			}
		}
		else
		{
			if (i >= ((len / 2) - 1))
			{
				_putchar(str[i]);
			}
		}
	}
	_putchar('\n');
}
