#include <unistd.h>

/**
  * _putchar - Used to print a single character
  * @c: The character
  * Return: the success value
  */
int _putchar(char c)
	return (write(1, &c, 1));
