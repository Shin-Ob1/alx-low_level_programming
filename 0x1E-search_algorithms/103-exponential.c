#include "search_algos.h"

/**
 * _binary_search - binary search algorithm function
 *
 * @array: pointer to array to search
 * @first: first index in array
 * @last: last index in array
 * @value: value to search for
 *
 * Return: index where value is located or (-1) if fail
 */
int _binary_search(int *array, size_t first, size_t last, int value)
{
	size_t mid, i;

	if (array == NULL)
		return (-1);
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

/**
  * exponential_search - Searche using exponential search algorithm
  *
  * @array: A pointer to the first element of an array
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: index of value or -1 if fail.
  */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
