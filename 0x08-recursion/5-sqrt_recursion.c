#include "main.h"

int _sqrt_(int n, int guess);

/**
  * _sqrt_recursion - Entry Point
  * @n: arg
  * Return : ret
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}

	return (_sqrt_(n, 1));
}

/**
  * _sqrt_ - Entry point
  * @n: arg
  * @guess: arg
  * Return: ret
  */
int _sqrt_(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return  (-1);
	}
	return (_sqrt_(n, guess + 1));
}
