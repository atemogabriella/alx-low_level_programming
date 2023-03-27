#include "main.h"
#include <stdio.h>
/**
  * rev_string - Reverses a string
  * @s: The string to be modified
  *
  * Return: void
  */
void rev_string(char *s)
{
	if (*s != '\0')
	{
		rev_string(s + 1);
		printf("%c", *s);
	}
}
