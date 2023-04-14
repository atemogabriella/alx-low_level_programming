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
	unsigned int l = 0;
	unsigned int m = 0;
	unsigned int r = 0;
	unsigned int i = 0;
	char *q;

	while (s1 != NULL && s1[l] != '\0')
	{
		l++;
	}

	while (s2 != NULL && s2[m] != '\0')
	{
		m++;
	}

	if (n >= m)
	{
		r = l + m;
	}

	else
	{
		r = i + n;
	}

	q = malloc((l + m) * sizeof(char) * r + 1);

	if (q == NULL)
	{
		return (NULL);
	}

	for (l = 0; s1[l] != '\0' && s1 != NULL ; l++)
	{
		q[l] = s1[l];
	}

	for (m = 0; s2[m] != '\0' && s2 != NULL ; m++)
	{
		q[l + m] = s2[m];
	}
	q[l + m] = '\0';
	return (q);
}

