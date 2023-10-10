#include "search_algos.h"

/**
 * linear_search - function to perform linear search
 *
 * @array: pointer to first element in array
 * @size: number of elements in the array
 * @value: value to search for
 *
 * Return: index of value or (-1) if fail
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	while (i < size)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
