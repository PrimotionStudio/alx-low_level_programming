#include <unistd.h>

/**
  * _putchar - Used to print a character
  * @c: The char
  * Return: the value
  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
