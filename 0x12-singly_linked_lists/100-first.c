#include <stdio.h>

void _construct (void) __attribute__ ((constructor));
/**
  * _construct - This function is supposed to run before main
  */
void _construct()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
