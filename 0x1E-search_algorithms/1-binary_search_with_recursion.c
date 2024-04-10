#include <stdio.h>
#include <stdlib.h>

void split_arr(int *array, int *new_arr, int start, int stop)
{
	int n = 0;
	while (start <= stop)
	{
		new_arr[n] = array[start];
		n++;
		start++;
	}
}

/**
 * print_arr - Used to print an array in a readable format
 * @array: the array to be printed
 * @size: the number of element in the array
 */
void print_arr(int *array, int size)
{
	int n = 0;

	printf("Searching in array: ");
	while (n < size)
	{
		if (n != 0)
			printf(", ");
		printf("%d", array[n]);
		n++;
	}
	printf("\n");
}

int search(int *array, int size, int value)
{
	/*printf("Hello\n");*/
	int middle = size / 2;
	int left_arr[middle];
	int ret = -1;
	int right_arr[(size % 2 == 0) ? middle : middle + 1 ];
	
	(void) left_arr, (void) right_arr;
	print_arr(array, size);
	if (size == 1 && array[middle] == value)
		ret = middle;
	else if (size == 1 && array[middle] != value)
		ret = -1;
	else if (array[middle] < value)
	{
		split_arr(array, right_arr, middle, size - 1);
		ret = search(right_arr, (size % 2 == 0) ? middle : middle + 1, value);
	}
	else if (array[middle] > value)
	{
		split_arr(array, left_arr, 0, middle - 1);
		ret = search(left_arr, middle, value);
	}
	return (ret);
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
	int _size = (int)size;
	int new_arr[size];

	if (array == NULL)
		return (-1);
	/* print_arr(array, _size);
	print_arr(new_arr, 5);*/
	split_arr(array, new_arr, 0, _size - 1);
	return (search(new_arr, _size, value));
}
