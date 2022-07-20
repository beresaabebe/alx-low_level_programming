#include "main.h"
/**
 * sqrt_test -  a function makes possible to evaluate from 1 to n
 * @a: first number
 * @b: second number
 * 
 * _sqrt_recursion -  a function that return square root of number
 * @n: number
 * Return: on succes return some values
 */
int sqrt_test(int a, int b)
{
	if (b * b == a)
		return (b);
	else if (b * b > a)
		return (-1);
	return (sqrt_test(a, b + a));
}
int _sqrt_recursion(int n)
{
	return (sqrt_test(n, 1));
}
