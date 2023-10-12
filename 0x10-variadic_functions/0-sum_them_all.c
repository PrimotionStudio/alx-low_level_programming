#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all - Sums all arg except the first
  * @n: number of arg
  * Return: int
  */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list numbers;
	int number;

	if (n == 0)
	{
		va_end(numbers);
		return (0);
	}

	va_start(numbers, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(numbers, int);
		sum += number;
	}
	va_end(numbers);
	return (sum);
}
