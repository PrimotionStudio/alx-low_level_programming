#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
  * print_seperator - The name telss u dummy
  * @separator: arg
  */
void print_separator(const char *separator)
{
	int i = 0;
	while (separator[i] != '\0')
	{
		printf("%c", separator[i]);
		++i;
	}
}
/**
  * print_numbers - Print number aand their dicvider
  * @separator: arg
  * @n: arg
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(numbers, int));
		if (i != (n - 1))
		{
			if (separator != NULL)
			{
				print_separator(separator);
			}
		}
	}
	va_end(numbers);
	printf("\n");
}
