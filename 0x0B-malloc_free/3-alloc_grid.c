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
	int x, m, i;

	if (width <= 0 && height <= 0)
	{
		return (NULL);
	}

	k = malloc(width * sizeof(int *));

	if (k == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < width; x++)
	{
		k[x] = malloc(height * sizeof(int));
	}

	if (k[x] == NULL)
	{
		return (NULL);
	}
	for (m = 0; m < width; m++)
	{
		free(k[m]);
	}
	for (i = 0; i < height; i++)
	{
		k[m][i] = 0;
	}
	return (k);
	free(k);
}
