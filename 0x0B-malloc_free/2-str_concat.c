#include "main.h"
#include <stdlib.h>
/**
 * str_concat - area where strings are appended
 *@s1: string where contents of the second string are appended
 *@s2: string in which its contents are appended to the first string
 *Return: First string after concatenation
 */
char *str_concat(char *s1, char *s2)
{
	int y = 0;
	int z = 0;
	char *c;

	while (s1 != NULL && s1[y] != '\0')
	{
		y++;
	}

	while (s2 != NULL && s2[z] != '\0')
	{
		z++;
	}

	c = malloc((y + z) * sizeof(char) + 1);

	if (c == NULL)
	{
		return (NULL);
	}

	for (y = 0; s1[y] != '\0' && s1 != NULL ; y++)
	{
		c[y] = s1[y];
	}

	for (z = 0; s2[z] != '\0' && s2 != NULL ; z++)
	{
		c[y + z] = s2[z];
	}
	c[y + z] = '\0';
	return (c);
}
