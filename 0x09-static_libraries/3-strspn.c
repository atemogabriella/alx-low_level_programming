#include "main.h"
/**
 * _strspn - memory scan area
 *@s: memory area to be filled
 *@accept: character to be copied
 *Return: memory filled
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				x++;
				break;

			}
			else if (accept[r + 1] == '\0')
			return (x);
		}
		s++;
	}
	return (x);
}
