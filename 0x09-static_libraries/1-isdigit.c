#include "main.h"
/**
 * _isdigit-check if input is a digit.
 * @c:character to check if it islowercase.
 * Return:1-if digit,0-if not.
 */


int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
