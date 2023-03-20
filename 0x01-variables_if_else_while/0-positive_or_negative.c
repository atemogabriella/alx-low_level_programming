#include <stdio.h>
#include <time.h>

/**
* main - Entry point
*
*Return:Always 0 (Success)
*/
int main(void)
{
	int a;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Enter an integer number\n");
        scanf("%d", &a);
	if(a > 0)
	{
                printf("%d is positive\n", a);
	}
	else if(a < 0)
	{
		printf("%d is negative\n", a);
        }
        else
	{
                printf("%d is zero\n", a);
        }

	return (0);
}
