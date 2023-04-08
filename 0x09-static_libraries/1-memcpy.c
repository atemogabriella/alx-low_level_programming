#include "main.h"

/**
* _memcpy - memory copied area
* @dest: dest memory area
* @src: source memory area
*@n: bytes from memory area
* Return: replaced bytes
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}

	return (dest);
}
