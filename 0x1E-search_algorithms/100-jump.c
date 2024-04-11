#include <stdio.h>
#include <math.h>
#include <stddef.h>

int jump_search(int *array, size_t size, int value)
{
	int jump_size = (int)sqrt((double)size), i,
	    jumps = 0, base = 0, top = base + jump_size,
	    _size = (int)size;


	if (array == NULL)
		return (-1);
	/*
	Risk of infinite loop
	*/
	while (top <= _size)
	{
		/*
		printf("base=>%d | top=>%d | size=>%d |
		jump_size=>%d | jumps=>%d\n", base,
		top, _size, jump_size, jumps);
		*/
		printf("Value checked array[%d] = [%d]\n", base, array[base]);
		if (array[top] >= value)
		{
			i = base;
			/*
			printf("base=>%d | top=>%d | size=>%d |
			jump_size=>%d | jumps=>%d\n", base,
			top, _size, jump_size, jumps);
			*/
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
		/*
		printf("base=>%d | top=>%d | size=>%d |
		jump_size=>%d | jumps=>%d\n", base,
		top, _size, jump_size, jumps);
		*/
		printf("Value checked array[%d] = [%d]\n", base, array[base]);
		printf("Value found between indexes [%d] and [%d]\n", base, top);
		while (array[i] && i < _size)
		{
			printf("Value checked array[%d] = [%d]\n", i, array[i]);
			if (array[i] == value)
				return (i);
			i++;
		}
		return (-1);
	}
	return (-1);
}
