#include "main.h"
/**
 * _islower - a function to test lower or not
 * @c: single letter input
 * Return: always return value 0 or 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
