#include <stdio.h>

/**
  * main - Entry point
  * Return: Always 0
  */
int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int i;
	int temp;

	printf("%d, ", num1);
	for (i = 1; i <= 50; i++)
	{
		printf("%d, ", num2);
		temp = num1 + num2;
		num1 = num2;
		num2 = temp;
	}
	return (0);
}
