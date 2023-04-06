#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - String length area
 *@s: string in which the string length is to be calculated
 *Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
