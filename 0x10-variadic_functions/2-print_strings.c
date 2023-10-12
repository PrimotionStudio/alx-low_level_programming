#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
  * print_text - Entry Point
  * @text: arg
  */
void print_text(const char *text)
{
	int i;

	i = 0;
	while (text[i] != '\0')
	{
		printf("%c", text[i]);
		++i;
	}
}
/**
  * print_strings - Prints string
  * @separator: arg
  * @n: arg
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list text;
	unsigned int i;
	char *str;

	va_start(text, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(text, char*);
		if (str == NULL)
			printf("(nil)");
		else
			print_text(str);
		if (i != (n - 1))
		{
			if (separator != NULL)
			{
				print_text(separator);
			}
		}
	}
	va_end(text);
	printf("\n");
}
