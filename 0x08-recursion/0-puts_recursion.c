#include "main.h"

/**
* _puts_recursion - prints in recursion
* @s: input string
* Return:Always void
*/

void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
	{
	return;
	}
	_putchar(s[i]);
	_puts_recursion(s + 1);

}