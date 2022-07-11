#include "main.h"
/**
 * swap_int - a function that swaps
 * @a: first variables
 * @b: second variable
 * Return: alway return some values
 */
void swap_int (int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
