#include "main.h"
/**
 * _strncat - a function that concatenate
 * @dest: destination values
 * @src: source values
 * @n: limit of the concatenation
 * Return: return destination values
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0, i = 0;

	while (dest[destlen])
		destlen++;
	while (i < n && src[i])
	{
		dest[destlen] = src[i];
		destlen++;
		i++;
	}
	dest[destlen + n + 1] = '\0';
	return (dest);
}
