#include "main.h"
/**
 * prime_test - a function that check number
 * @a: first number which same as n
 * @b: iterate number from 1 to n
 * Return: on success return value
 */
int prime_test(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime_test(a, b + 1));
}

/**
 * is_prime_number - a function that return 1 if number is prime else 0
 * @n: number integer
 * Return: on success return some values
 */
int is_prime_number(int n)
{
	if (n % 2 != 0)
		return (1);
	else
		return (prime_test(n, 2));
}
