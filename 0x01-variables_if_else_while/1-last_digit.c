#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - starting point is here
 * Return: show it success 0
 */
int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
	{
		printf("%d and is greater than 5\n", lastd);
	}
	else if (lastd == 0)
	{
		printf("%d and is 0\n", lastd);
	}
	else if (lastd < 6 && lastd != 0)
	{
		printf("%d and is less than 6 and not 0\n", lastd);
	}

	return (0);
}
