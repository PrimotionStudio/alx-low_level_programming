#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
  * array_range - Entry point
  * @min: arg
  * @max: arg
  * Return: ret
  */
int *array_range(int min, int max)
{
	int i, j, total;
	int *array;

	if (min > max)
		return (NULL);
	total = max - min + 1;
	array = malloc(sizeof(int) * total);
	if (array == NULL)
		return (NULL);
	j = 0;
	for (i = min; i <= max; i++)
	{
		array[j] = i;
		j++;
	}
	return (array);
}
