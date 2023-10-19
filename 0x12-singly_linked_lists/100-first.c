#include <stdio.h>

void _construct(void) __attribute__ ((constructor));
/**
  * _construct - This function is supposed to run before main
  */
void _construct(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
