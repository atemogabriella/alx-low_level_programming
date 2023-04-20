#include "function_pointers.h"
/**
 * array_iterator - copies elements on a newline.
 * @array: element to be copied to a newline
 * @size: number of elements to print
 * @action: pointer to print as input arguments
 *Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int z;

	if (array != NULL && action != NULL)
	{
		for (z = 0; z < size; z++)
		{
			action(array[z]);
		}
	}
}
