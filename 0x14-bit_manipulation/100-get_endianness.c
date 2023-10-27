#include "main.h"

/**
  * get_endianness - Check the endianness
  * Return: 0 or 1
  */
int get_endianness(void)
{
	unsigned int check = 1;
	char *ptr = (char *)&check;
	return (*ptr);
}
