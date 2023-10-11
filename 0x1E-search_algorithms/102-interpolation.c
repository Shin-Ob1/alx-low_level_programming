#include "search_algos.h"

/**
 * interpolation_search - searche with interpolation algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search for
 * Return: index of the number or (-1) if fail
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t p, low, high;
	double f;

	if (array == NULL)
		return (-1);

	low = 0;
	high = size - 1;

	while (size)
	{
		f = (double)(high - low) / (array[high] - array[low]) * (value - array[low]);
		p = (size_t)(low + f);
		printf("Value checked array[%d]", (int)p);

		if (p >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[p]);
		}

		if (array[p] == value)
			return ((int)p);

		if (array[p] < value)
			low = p + 1;
		else
			high = p - 1;

		if (low == high)
			break;
	}

	return (-1);
}
