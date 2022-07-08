#include "main.h"
/**
 * _isdigit - a function that checks is digit or not
 * @c: input values
 * Return: is success return values
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
