#include "main.h"

/**
  * swap_int - Entry point
  * @a: arg
  * @b: arg
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
