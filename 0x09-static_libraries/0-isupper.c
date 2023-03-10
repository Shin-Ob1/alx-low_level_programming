#include "main.h"
/**
 * _isupper-check if character is uppercase
 * @c:character to check if it islowercase.
 * Return:0-if lowercase,1-if not.
 */


int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

