#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * free_dog - frees memory allocated for a structure dog
  * @d: dog structure
  * Return: dog structure
  */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}
