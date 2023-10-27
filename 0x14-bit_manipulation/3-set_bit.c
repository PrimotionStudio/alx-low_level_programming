#include "main.h"

/**
 * set_bit - Set the value of a bit to 1 at a given index
 * @n: Pointer to the unsigned long integer
 * @index: The index of the bit to set to 1
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int net = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n = *n | net;

	return (1);
}
