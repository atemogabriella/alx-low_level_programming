#include "main.h"
#include <stdio.h>
/**
 * main - program execution area
 * @argc: area where things in command line are counted
 * @argv: character pointers area
 * Return: 0
 */
int main(int argc, char __attribute__((__unused__)) **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
