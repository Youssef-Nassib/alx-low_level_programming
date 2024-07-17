#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - linear cearch algorithm
 *
 * @array: pointer to an array of integers
 * @size: size for the array
 * @value: value to search for
 *
 * Return: the index of the first match else -1 (Failure)
 */
int linear_search(int *array, size_t size, int value)
{
	int x;

	if (!array)
		return (-1);

	x = 0;
	while (x < (int) size)
	{
		printf("Value checked array[%d] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
		x++;
	}

	return (-1);
}
