#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * free_grid - Entry Point
  * @grid: arg
  * @height: arg
  */
void free_grid(int **grid, int height)
{
	int row;

	row = 0;
	while (row < height)
	{
		free(grid[row]);
		row++;
	}
	free(grid);
}
