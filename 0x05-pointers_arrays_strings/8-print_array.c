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

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i]);
		if (i == (n))
			printf(" ");
	}
	printf("\n");
}
