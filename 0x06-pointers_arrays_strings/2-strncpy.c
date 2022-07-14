#include "main.h"
/**
 * _strncpy -  a function that copy a string values
 * @dest: destination values
 * @src: source values
 * @n: copy limit
 * Return: return values
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (src[b])
	{
		b++;
	}

	while (a < n && src[a])
	{
		dest[a] = src[a];
		a++;
	}

	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}

	return (dest);
}
