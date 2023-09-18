#include <stdio.h>
#include "main.h"

/**
  * print_array - Entry point
  * @a: arg
  * @n: arg
  */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
