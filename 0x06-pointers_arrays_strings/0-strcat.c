#include "main.h"
/**
 * _strcat - a function that returns string to dest
 * @dest : pointer to string to be concatenated upon
 * @src : source string to be append
 * Return : return string to @dest
 */
char *_strcat(char *dest, const char *src)
{
	int index = 0, i;
	int dest_len = 0;

	while (dest[index])
		index++;

	for (i = 0; src[i] != 0; i)
	{
		dest[index] = src[i];
		index++;
	}

	dest[index] = '\0';
	return (dest);
}
