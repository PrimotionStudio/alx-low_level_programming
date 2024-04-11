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
	while (1)
	{
		/*
		printf("base=>%d | top=>%d | size=>%d | jump_size=>%d | jumps=>%d\n", base, top, _size, jump_size, jumps);
		*/
		printf("Value checked array[%d] = [%d]\n", base, array[base]);
		if (top >= _size)
		{

			i = base;
			
			printf("base=>%d | top=>%d | size=>%d | jump_size=>%d | jumps=>%d\n", base, top, _size, jump_size, jumps);
			
			printf("Value found between indexes [%d] and [%d] ->4\n", base, top);
			while (i <= top - _size)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
				i++;
			}
			break;
		}
		else if (array[top] >= value)
		{
			i = base;
			/*
			printf("base=>%d | top=>%d | size=>%d | jump_size=>%d | jumps=>%d\n", base, top, _size, jump_size, jumps);
			*/
			printf("Value found between indexes [%d] and [%d] ->2\n", base, top);
			while (i <= top)
			{
				printf("Value checked array[%d] = [%d]\n", i, array[i]);
				if (array[i] == value)
					return (i);
				i++;
			}
			return (-1);
		}
		else if (array[top] < value && (top + jump_size + 1) > _size)
		{
			i = base;
			/*
			printf("base=>%d | top=>%d | size=>%d | jump_size=>%d | jumps=>%d\n", base, top, _size, jump_size, jumps);
			*/
			printf("Value found between indexes [%d] and [%d] ->3\n", base, top);
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
	return (-1);
}
