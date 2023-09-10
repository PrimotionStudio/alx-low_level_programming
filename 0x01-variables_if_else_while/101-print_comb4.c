#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */
int main(void)
{
	int num;
	int subnum;
	int num1;
	int num2;
	int num3;

	for (num = 0; num <= 999; num++)
	{
		subnum = num;
		num1 = subnum % 10;
		subnum /= 10;
		num2 = subnum % 10;
		subnum /= 10;
		 num3 = subnum % 10;

		if (num1 < num2)
		{
			if (num2 < num3)
			{
				putchar(num1 + '0');
				putchar(num2 + '0');
				putchar(num3 + '0');
				if ((num1 != 7) || (num2 != 8) || (num3 != 9))
				{
					putchar(',');
					putchar(' ');
				}

			}
		}
	}
	putchar('\n');

	return (0);
}
