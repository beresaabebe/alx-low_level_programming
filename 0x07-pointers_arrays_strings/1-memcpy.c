#include "main.h"
/**
 * _memcpy - a function that copies n byte from source to dest
 * @dest: destination location to be copied area
 * @src: source byte to be copies
 * @n: n bytes of 
 * Return: return values
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}

	return (dest);
}
