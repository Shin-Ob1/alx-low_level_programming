#include "main.h"
/**
 * _isdigit-check if input is a digit.
 * @c:character to check if it islowercase.
 * Return:0-if lowercase,1-if not.
 */


int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
