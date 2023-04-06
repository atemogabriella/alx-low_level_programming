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
		putchar('\n');
		return;
	}
	_putchar(*s);
        _print_rev_recursion(s + 1);
}
