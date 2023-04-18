#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

int _strlen(char *s)
{
	int n;

	n = 0;

	while (s[n] != '\0')
	{
		n++;
	}

	return (n);
}
char *_strcpy(char *dest, char *src)
{
	int n, r;

	while (src[n] != '\0')
	{
		n++;
	}

	for (r = 0; r < src[n]; r++)
	{
		dest[r] = src[r];
	}
	dest[r] = '\0';

	return (dest);
}
/**
 * new_dog -  structure to be created which is a new dog
 * @name: new dog name
 * @age: new dog age
 * @owner: new dog owner
 * _strlen -  returns the length of a string
 * _strcpy - copies the string pointed from source to destination
 * Return: new dog  structure created
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *q;
	int n, w;

	n = _strlen(name);
	w = _strlen(owner);

	q = malloc(sizeof(dog_t));

	if (q == NULL)
	{
		return (NULL);
	}
	q->name = malloc(sizeof(char) * (n + 1));
	if (q->name == NULL)
	{
		free(q);
		return (NULL);
	}
	q->owner = malloc(sizeof(char) * (w + 1));
	if (q->owner == NULL)
	{
		free(q);
		free(q->owner);
		return (NULL);
	}

	_strcpy(q->name, name);
	_strcpy(q->owner, owner);

	q->age = age;
	return (q);
}
