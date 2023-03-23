#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all inputed variables
 *
 * @n: input value
 *
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	if (n == 0)
	{
		return (0);
	}
	int sum = 0, i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		sum = sum + va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
