#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - program execution area
 * @argc: area where things in command line are counted
 * @argv: character pointers area
 * Return: 0
 */
int main(int argc, char **argv)
{
	int g;
	int k = 1;

	for (g = 1; g < argc; g++)
	{
		int x = strtol(argv[g], NULL, 10);

		k = k * x;
	}
	printf("%d\n", k);
	return (0);
}

