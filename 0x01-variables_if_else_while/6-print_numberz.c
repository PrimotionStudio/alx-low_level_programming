#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int letter = 0;

	for (; letter <= 9; letter++)
	{
		putchar(letter + '0');
	}
	putchar('\n');
	return (0);
}
