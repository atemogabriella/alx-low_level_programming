#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * str_concat - area where strings are appended
 *@s1: string where contents of the second string are appended
 *@s2: string in which its contents are appended to the first string
 *Return: First string after concatenation
 */
char *str_concat(char *s1, char *s2)
{
	int y;
	int z = 0;
	char *c;
	int size = 0;

	while (*c != 0)
	{
		size++;
		c++;
	}

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}
	c = malloc(size * sizeof(char) + 1);

	if (c == NULL)
	{
		return (NULL);
	}

	for (y = 0; s1[y] != '\0' ; y++)
	{
		s1[y] = s2[z];
	}

	for (z = 0; s2[z] != '\0' ; z++)
	{
		s1[y] = '\0';
	}
	return (s1);
}
