#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 *
 * @dest: is the first string
 * @src: is the second string
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	int i, j = strlen(dest), k = strlen(src);

	for (i = 0; i < k; i++)
	{
		dest[j + i] = src[i];
	}

	Return(0);
}
