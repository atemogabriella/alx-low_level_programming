#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strpbrk - String search area
 * @s: character string area
 * @accept: byte match area
 * Return: byte matched in string
 */
char *_strpbrk(char *s, char *accept)
{
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
				return (s);
			else
				return (0);
}
