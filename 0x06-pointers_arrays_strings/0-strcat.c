#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: is the first string
 * @src: is the second string
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, k;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}

	dest[i + j] = '\0';

	Return(dest);
}
