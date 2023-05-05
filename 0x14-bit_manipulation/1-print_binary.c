#include "main.h"

/**
 * print_binary - prints the binary of a number
 * @n: input unsigned long integer
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int i, bits;
	unsigned long int shifts;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	bits  = 0;
	shifts = n;
	while (shifts != 0)
	{
		shifts = shifts >> 1;
		bits++;
	}
	for (i = (bits - 1); i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
