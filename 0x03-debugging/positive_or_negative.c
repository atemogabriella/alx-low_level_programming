#include "main.h"
#include <stdio.h>

/**
*positive_or_negative - Checks for positive or negative numbers
*@i: The number to be checked
* Return: Always 0 (Success)
*/

void positive_or_negative(int i)
{
	if (i < 0)
		
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
