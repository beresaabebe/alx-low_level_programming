#include "main.h"
/**
 * factorial - a function that return factorial of number
 * @n: limit number
 * Return: on success return some values
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
