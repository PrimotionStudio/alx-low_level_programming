#include <stdio.h>

/**
  * main - Entry point
  * @argc: arg
  * @argv: arg
  * Return: 0
  */
int main(int argc, char *argv[])
{
	while (argc)
	{
		argc--;
	}
	printf("%s\n", argv[0]);
	return (0);
}
