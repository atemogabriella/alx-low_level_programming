#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - Copied string area
 *@str: String to be copied
 *Return: copied string
 */
char *_strdup(char *str)
{
	char *q = str;
	int size = 0;
	int r;

	if (str == NULL)
	{
		return (NULL);
	}

	while (*q != '\0')
	{
		size++;
		q++;
	}

	q = malloc(size * sizeof(char) + 1);

	if (q == NULL)
	{
		return (NULL);
	}

	for (r = 0; r < size; r++)
	{
		q[r] = str[r];
	}
	return (q);
}
