#include <stdio.h>
#include <stdlib.h>


/**
 * print_arr - Used to print an array in a readable format
 * @array: the array to be printed
 * @size: the number of element in the array
 * @left: the leftmost element of the array
 * @right: the rightmost element of the array
 */
void print_arr(int *array, int size, int left, int right)
{
	int n = 0;

	printf("Searching in array: ");
	while (left <= right && left <= size)
	{
		if (n != 0)
			printf(", ");
		printf("%d", array[left]);
		left++;
		n++;
	}
	printf("\n");
}

/**
 *  binary_search - a function that searches for a value in an
 *  array of integers using the Binary search algorithm
 *  @array: a pointer to the first element of the array to search in
 *  @size: the number of elements in array
 *  @value: the value to search for
 *  Return: the index where value is located or if
 *  value is not present in array or if array is NULL, -1
 */
int binary_search(int *array, size_t size, int value)
{
	int _size = (int)size, left = 0, right = _size - 1, middle;

	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		print_arr(array, _size, left, right);
		middle = left + (right - left) / 2;
		if (array[middle] == value)
			return (middle);
		if (array[middle] > value)
			right = middle;
		if  (array[middle] < value)
			left = middle + 1;
	}
	return (-1);
}
