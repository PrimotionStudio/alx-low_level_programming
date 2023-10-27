#include "main.h"

/**
  * clear_bit - Set the value of a bit to 0
  * @n: Pointer the long int
  * @index: The index of the bit
  * Return: 1 or -1
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int net = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n & -net;

	return (1);
}
