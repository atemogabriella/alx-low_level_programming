#include "main.h"
#include <stdio.h>
/**
 * main - program execution area
 * @argc: area where things in command line are counted
 * @argv: character pointers area
 * Return: 0
 */
int main(int argc, char **argv)
{
	int r;

	for (r = 0; r < argc; r++)
	{
		printf("%s", argv[r]);
	}
	printf("\n");
	return (0);

}

