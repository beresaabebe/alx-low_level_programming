#include "main.h"
/**
 * _isupper - a function that checks for uppercase
 * @c: input values
 * Return: return 1 for upper and 0 for lower
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
