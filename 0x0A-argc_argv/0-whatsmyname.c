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
	printf("mynameis\n");
	printf("%d\n", argc - 1);
	printf("%s\n", argv[0]);
	return (0);
}

