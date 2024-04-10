#include <stdio.h>

/**
 *  linear_search - a function that searches for a value in an
 *  array of integers using the Linear search algorithm
 *  @array: a pointer to the first element of the array to search in
 *  @size: the number of elements in array
 *  @value: the value to search for
 *  Return: the first index where value is located or if
 *  value is not present in array or if array is NULL, -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t n = 0;

	if (array == NULL)
		return (-1);

	while (n < size)
	{
		printf("Value checked array[%d] = %d\n", n, array[n]);
		if (array[n] == value)
			return (n);
		n++;
	}
	return (-1);
}
