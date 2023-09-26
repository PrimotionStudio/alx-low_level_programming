#include "main.h"
#include <stdio.h>

/**
  * print_diagsums - Entry point
  * @a: arg
  * @size: arg
  */
void print_diagsums(int *a, int size)
{
	int i;
	int sum1 = 0;
	int sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
	}

	for (i = (size - 1); i >= 0; i--)
	{
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum1, sum2);
}
