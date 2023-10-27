#include "main.h"

/**
  * get_bit - Used to get the value of a bit at index
  * @n: The bits
  * @index: The index
  * Return: The bit
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);

	bit = (n >> index) & 1;
	return (bit);
}
