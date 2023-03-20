#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
	int n;
	int g;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	g = n % 10;
	if (g > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, g);
	}

	else if (g == 0)
	{
		printf("Last digit of %d is %d and is zero\n", n, g);
	}

	else if (g < 6 && g = !0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, g);
	}

	return (0);
}
