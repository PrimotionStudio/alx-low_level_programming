#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * main - Entry point
  * */
int main(int argc, char *argv[])
{
	int i;
	unsigned long int num1, num2;

	if (argc != 3)
	{
		return (0);
	}
	for (i = 0; argv[1][i] != '\0'; i++)
	{
		if (!(argv[1][i] >= '0' && argv[1][i] <= '9'))
		{
			return (0);
		}
	}
	for (i = 0; argv[2][i] != '\0'; i++)
	{
		if (!(argv[2][i] >= '0' && argv[2][i] <= '9'))
		{
			return (0);
		}
	}
	num1 = atoll(argv[1]);
	num2 = atoll(argv[2]);
	printf("%lu", num1 * num2);
	return (0);
}
