#include "main.h"
/**
 * palind1 - obtains length of number a
 * @a: first number
 * @i: length checking
 * Return: on success return value
 */
int palind1(char *a, int i)
{
	if (*a == 0)
		return (i - 1);
	return (palind1(a + 1, i + 1));
}
/**
 * palind2 - compares string with reverse string
 * @a: string or number
 * @i: length of string or number
 * Return: on success return value
 */
int palind2(char *a, int i)
{
	if (*a != *(a + i))
		return (0);
	else if (*a == 0)
		return (1);
	return (palind2(a + 1, i - 2));
}
/**
 * is_palindrome -  a function that check number is palindrome or not
 * @s: string to evaluate and return
 * Return: on sucess return value
 */
int is_palindrome(char *s)
{
	int i;

	i = palind1(s, 0);
	return (palind2(s, i));
}
