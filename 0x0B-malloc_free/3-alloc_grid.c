#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * alloc_grid - Entry Point
  * @width: arg
  * @height: arg
  * Return: int
  */
int **alloc_grid(int width, int height)
{
	int **array;
	int i;
	int j;

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	array = (int **) malloc(sizeof(int)  * height);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		array[i] = (int *) malloc(sizeof(int) * width);
		if (array[i] == NULL)
		{
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
	return (array);
}
