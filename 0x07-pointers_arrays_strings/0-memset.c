#include "main.h"
/**
 * _memset - Sets a constant character in memory
 * @s: input value
 * @b: input value
 * @n: input value
 *
 * Return: i
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	i = 0;


	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (*s);
}
