#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * *array_range - Integer array creation area
 * @min: smallest value
 * @max: largest value
 * Return: pointer of new array
 */
int *array_range(int min, int max)
{
	int *t;
	int r = 0;

	if (min > max)
	{
		return (NULL);
	}
	t = malloc((sizeof(int)) * (max - min) + sizeof(int));
	if (t == NULL)
	{
		return (NULL);
	}

	for (; min <= max; r++)
	{
		t[r] = min;
		min++;
	}
	return (t);
}
