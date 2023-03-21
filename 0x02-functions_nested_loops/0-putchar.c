#include <stdio.h>
#include <main.h>

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int c;

	c = getchar();
	while (c != EOF)
	{
		putchar(c);
		c = getchar();
	}

	return (0);
}
