#include "3-calc.h"

/**
  * main - prints results of simple operations carried out
  * @argc: number of supplied arguments in the program
  * @argv: array of pointers to arguments
  *
  * Return: 0 (Success)
  */
int main(int argc, char *argv[])
{
	int (*oprt)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	oprt = get_op_func(argv[2]);

	if (!oprt)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", oprt(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
