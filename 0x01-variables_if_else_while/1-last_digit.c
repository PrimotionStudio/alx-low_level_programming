#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int last_num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last_num = n % 10;
	printf("Last digit of %d is %d and is ", n, last_num);
	if (last_num > 5)
		printf("greater than 5");

	if (last_num == 0)
		printf("0");

	if ((last_num < 6) && (last_num != 0))
		printf("less than 6 and not 0");

	printf("\n");
	return (0);
}
