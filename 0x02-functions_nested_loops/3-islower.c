#include "main.h"
/**
 * _islowe - a function to test lower or not
 * Return: always return value 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
