#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int num1 = 0;
	int num2 = 0;

	for (; num1 <= 9; num1++)
	{
		for (; num2 <= 9; num2++)
		{
			if (num1 < num2)
			{

				putchar(num1 + '0');
				putchar(num2 + '0');

				if ((num1 != 8) || (num2 != 9))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		num2 = 0;
	}
	putchar('\n');

	return (0);
}
