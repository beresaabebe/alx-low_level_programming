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
	int i = 0, j = 0;

	while (src[j])
		i++;
	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
