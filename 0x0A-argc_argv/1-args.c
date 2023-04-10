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
	int b;

	for (b = 0; b < argc; b++)
	{
		  printf("%d : %s\n" , b, argv[b]);
	}
	return (0);
}
