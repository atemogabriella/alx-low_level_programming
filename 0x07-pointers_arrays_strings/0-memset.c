#include "main.h"

/**
 *_memset - Fills first bytes of the memory area with a constant
 *@b: The constant byte
 *@n: The unsigned integer
 *@s: Memory area
 *Return: The memory name filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int k;

	for (k = 0; k < n; k++)
	{
		s[k] = b;
	}
	return (s);

}
