#include "main.h"
#include <stdio.h>
/**
 * print_array - a function that print n elements of an array
 * @a: first values of pointer
 * @n: pointer refences value
 * Return : always return something/
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
		if (i == (n - 1))
			printf("%d", a[n - 1]);
	}
	printf("\n");
}
