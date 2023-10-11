#include "search_algos.h"

/**
 * binary_search - binary search algorithm function
 *
 * @array: pointer to array to search
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: index where value is located or (-1) if fail
 */

int binary_search(int *array, size_t size, int value)
{
	size_t first, last, mid, i;

	if (array == NULL)
		return (-1);
	first = 0;
	last = size - 1;
	mid = (first + last) / 2;
	printf("Searching in array: ");
	for (i = first; i < last; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[last]);
	while (array[mid] != value)
	{
		if (first == last)
			return (-1);
		if (array[mid] < value)
			first = mid + 1;
		else if (array[mid] > value)
			last = mid - 1;
		mid = (first + last) / 2;
		printf("Searching in array: ");
		for (i = first; i < last; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[last]);
	}
	return (mid);
}
