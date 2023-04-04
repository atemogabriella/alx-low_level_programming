#include "main.h"
#include <stdio.h>
/**
 * _strchr - find string character
 *@s: pointer to string
 *@c: string character
 *Return: string character found
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if(*s == c)
		{
			return (s);
		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return(0);
}
