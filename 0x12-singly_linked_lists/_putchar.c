#include <unistd.h>

/**
  * _putchar - Used to print a character at a time
  * @c: Character to be printed
  */
int _putchar(char c)
	return (write(1, &c, 1));
