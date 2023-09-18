#include <string.h>
#include "main.h"

/**
  * puts2 - Entry point
  * @str: arg
  */
void puts2(char *str)
{
	int i;
	size_t lenght = strlen(str);
	int len;
	int j;

	len = lenght;

	j = 2;

	for (i = 0; i < len; i++)
	{
		if (j % 2 == 0)
		{
			_putchar(str[i]);
			j++;
		}
		else
		{
			j++;
			continue;
		}
	}
	_putchar('\n');
}
