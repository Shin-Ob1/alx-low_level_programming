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
		_putchar('\n');
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(s[i]);
}
