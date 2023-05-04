#include "main.h"

/**
 * flip_bits - number of different bits between two numbers
 * @n: first number
 * @m: second number
 *
 * Return: number of bits you would need to flip
 * to get from one number to another.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int d, ch;
	unsigned int count, i;

	count = 0;
	ch = 1;
	d = n ^ m;
	for (i = 0; i < 31; i++)
	{
		if (check == (d & ch))
			count++;
		ch <<= 1;
	}
	return (count);
}
