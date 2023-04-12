#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * alloc_grid - area where 2 dimensional arrays are dynamically allocated
 *@width: first dimensional array
 *@height: second dimensional array
 *Return: dynamic allocation area
 */
int **alloc_grid(int width, int height)
{
	int **k;
	int x, z;

	if (width <= 0 && height <= 0)
	{
		return (NULL);
	}

	k = malloc(height * sizeof(int *));

	if (k == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < height; x++)
	{
		k[x] = malloc(width * sizeof(int));
	}

	if (k[x] == NULL)
	{
		for (; x >= 0; x--)
		{
			free(k[x]);
			free(k);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (z = 0; z < width; z++)
		{
			k[x][z] = 0;
		}
	}
	return (k);
}
