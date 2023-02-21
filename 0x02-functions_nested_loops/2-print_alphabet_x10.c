#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabeth 10 times
 * Result: on Success 1
 */
void print_alphabet_x10(void)
{
	int a;
	char b;

	for (a = 1; a <= 10; a++)
	{
		for (b = 'a'; b <= 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');

	}

}
