#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char l;
	char L;

	for (l = 'a'; l <= 'z'; l++)
	{
		putchar(l);
	}

	for (L = 'A'; L <= 'Z'; L++)
		putchar(L);

	putchar('\n');

	return (0);
}
