#include <string.h>
#include "main.h"

/**
  * rev_string - Entry point
  * @s: arg
  */
void rev_string(char *s)
{
	int i;
	size_t lenght = strlen(s);
	int len;
	char temp;

	len = lenght;

	for (i = 0; i < (len / 2); i++)
	{
		temp = *(s + i);
		*(s + i) = s[len - i - 1];
		*(s + (len - i - 1)) = temp;
	}
}
