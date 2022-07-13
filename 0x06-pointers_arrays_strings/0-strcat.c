#include "main.h"
/**
 * strcat - a function that returns string to dest
 * @dest : pointer to string to be concatenated upon
 * @src : source string to be append
 * Return : return string to @dest
 */
char *strcat(char *dest, const char *src)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
