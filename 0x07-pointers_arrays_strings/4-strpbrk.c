#include "main.h"

/**
 * _strpbrk - String search area
 * @s: memory area to be filled
 * @accept: character to be copied
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
		}
		s++;
	}
	return (0);
}
