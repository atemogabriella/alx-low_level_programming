#include "main.h"
/**
 * _strstr - string occurrence area
 * @haystack: memory to be filled
 *@needle: character to be copied
 *Return: filled memory area
 */
char *_strstr(char *haystack, char *needle)
{
	int m;

	if(*needle == 0)
		return(haystack);

	while (*haystack)
	{
		for (m = 0; needle[m]; m++)
		{
			if (*haystack == needle['\0'])
			return (haystack);
		}
		haystack++;
	}
	return (haystack);
}

