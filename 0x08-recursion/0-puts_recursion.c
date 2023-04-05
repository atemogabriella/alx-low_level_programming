#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - print newline area
 * @s: string to be printed
 *Return : string printed
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);

}
