#include "main.h"

/**
  * is_prime_number - Entry point
  * @n: arg
  * Return: ret
  */
int _prime(int n, int guess);

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return(0);
	}

	return(_prime(n, 2));
}

/**
  * _prime - Entry point
  * @n: arg
  * @guess: arg
  * Return: ret
  */
int _prime(int n, int guess)
{
	if (guess * guess > n)
	{
		return (1);
	}
	if (n % guess == 0)
	{
		return (0);
	}
	return (_prime(n, guess + 1));
}
