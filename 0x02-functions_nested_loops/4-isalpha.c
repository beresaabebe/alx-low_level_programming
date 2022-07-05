#include "main.h"
/**
 * _isalpha - a funtion that checks for alphabets
 * @c: single character input
 * Return: 1 if c is a letter - upper or lower, and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
