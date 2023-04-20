#include "function_pointers.h"
/**
 * int_index - returns index if condition is true
 * @array: array
 * @size: number of elements in an array
 * @cmp: pointer in function comparing values
 * Return: 0 (Success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int g = 0;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}
	for (g = 0; g < size; g++)
	{
		if (cmp(array[g] != 0))
		{
			return (g);
		}
	}
	return (-1);
}

