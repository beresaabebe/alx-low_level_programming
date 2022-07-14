#include "main.h"
/**
 * reverse_array - Reverses the content of an arra
 * @a: Array integers
 * @n: number of arrays
 * Return: Nothing to return
 */
void reverse_array(int *a, int n)
{
	int *p, i, aux, k;

	p = a;

	for (i =1; i < n; i++)
		p++;	
	for (k = 0; k < i / 2; k++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}
