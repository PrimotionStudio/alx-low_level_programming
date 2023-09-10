#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int num = 0;
	char hex = 'a';

	for (; num < 16; num++)
	{
		if (num < 10)
		{
			putchar(num + '0');
		}
		else
		{
			for (; hex <= 'f'; hex++)
			{
				putchar(hex);
			}
		}
	}
	putchar('\n');

	return (0);
}
