#include "main.h"

/*
 * more_numbers - prints 10 times numbers
 *
 * Return: Always 0
 */

void more_numbers(void)
{
	int i = 1, j;

	while (i <= 10)
	{
		j = 0;
		while (j <= 14)
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
