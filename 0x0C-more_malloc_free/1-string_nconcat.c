#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * @*string_nconcat - String concatenation area
 * @s1: first string
 * @s2: second string to be concatenated to the first
 * @n: umber of bytes
 * Return: 0 (Success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int l = 0, m = 0, i = 0;
	char *q;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[l] != '\0')
	{
		l++;
	}
	while (s2[m] != '\0')
	{
		m++;
	}
	if (n < m)
	{
		m = n;
	}
	q = malloc(sizeof(char) * (l + m + 1));
	if (q == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < l; i++)
	{
		q[i] = s1[i];
	}
	for (; i < l + m; i++)
	{
		q[i] = s2[i - l];
	}
	q[i] = '\0';
	return (q);
}

