#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned integer
 * @b: pointer to array of char
 *
 * Return: converted unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	int i, j;
	unsigned int sum, base;

	if (b == NULL)
	{
		return (0);
	}
	j = 0;
	while (b[j] != '\0')
	{
		if (b[j] != '0' && b[j] != '1')
		{
			return (0);
		}
		j++;
	}
	sum  = 0;
	base = 1;
	for (i = (j - 1); i >= 0; i--)
	{
		if (b[i] == '1')
		{
			sum  = (sum + base);
		}
		base = base * 2;
	}
	return (sum);
}
