#include <stdio.h>
#include <math.h>
#include <stddef.h>

/**
 * jump_search -  searches for a value in a sorted
 * array of integers using the Jump search algorithm
 *  @array: a pointer to the first element of the array to search in
 *  @size: the number of elements in array
 *  @value: the value to search for
 *  Return: the index where value is located or if
 *  value is not present in array or if array is NULL, -1
 */
int jump_search(int *array, size_t size, int value)
{
	int jump_size = (int)sqrt((double)size), i,
	    jumps = 0, base = 0, top = base + jump_size,
	    _size = (int)size;

	if (array == NULL)
		return (-1);
	while (top <= _size)
	{
		printf("Value checked array[%d] = [%d]\n", base, array[base]);
		if (array[top] >= value)
		{
			i = base;
			printf("Value found between indexes [%d] and [%d]\n", base, top);
			while (i <= top)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
				i++;
			}
			return (-1);
		}
		base += jump_size;
		top += jump_size;
		jumps++;
	}
	if (top > _size)
	{
		i = base;
		printf("Value checked array[%d] = [%d]\n", base, array[base]);
		printf("Value found between indexes [%d] and [%d]\n", base, top);
		while (array[i] && i < _size)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
			i++;
		}
	}
	return (-1);
}
