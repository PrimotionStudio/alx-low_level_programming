#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
  * print_all - Entry point
  * @format: arg
  */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list str;
	char *text;
	int pflag = 0;

	va_start(str, format);
	while (format[i] != '\0')
	{
		if (pflag != 0)
			printf(", ");
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(str, int));
				pflag = 1;
				break;
			case 'f':
				printf("%f", va_arg(str, double));
				pflag = 1;
				break;
			case 'i':
				printf("%d", va_arg(str, int));
				pflag = 1;
				break;
			case 's':
				text = va_arg(str, char*);
				pflag = 1;
				if (text == NULL)
					text = "(nil)";
				printf("%s", text);
				break;
			default:
				i++;
				pflag = 0;
				continue;
		}
		i++;
	}
	va_end(str);
	printf("\n");
}
