#include "main.h"

/**
  * flip_bits - Count the bits
  * @n: The first int
  * @m: The second int
  * Return: The number of bit
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int count = 0;

	while (x > 0)
	{
		count += x & 1;
		x >>= 1;
	}
	return (count);
}
