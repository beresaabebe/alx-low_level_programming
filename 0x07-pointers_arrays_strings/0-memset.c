#include "main.h"
/**
 * _memset - a function that fill memory with a constant byte
 * @s: memory area to fill
 * @b: constant byte to be filed
 * @n: bytes of memory area
 * Return: return filled momery
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
