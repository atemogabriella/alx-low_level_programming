#include "main.h"
#include <stdio.h>
/**
 * _print_rev_recursion - reverse  string print area
 *@s: string to be reverse printed
 *Return: string reversed
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
