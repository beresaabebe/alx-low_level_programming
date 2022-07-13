#include "main.h"
#include <stdio.h>
/**
 * _strcat - a function that returns string to dest
 * @dest : pointer to string to be concatenated upon
 * @src : source string to be append
 * Return : return string to @dest
 */
char *_strcat(char *dest, char *src)
{
	int dlen = 0, i;

	while (dest[dlen])
	{
		dlen++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[dlen] = src[i];
		dlen++;
	}

	dest[dlen] = '\0';
	return (dest);
}
