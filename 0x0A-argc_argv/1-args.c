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
	int m;

	for (m = 0; m < argc; m++)
	{
		printf("%s", argv[m]);
	}
	printf("\n");
	return (0);
}
