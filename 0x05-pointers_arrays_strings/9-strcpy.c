#include "main.h"
#include <stdio.h>
/**
 * _strcpy - a function that copies string
 * @dest: destination char values
 * @src : source pointer char values
 * Return : always return some values
 * return : values of dest 
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; *src != '\0'; i++)
	{
		dest[i] = *src;
		src++;
	}

	dest[i++] = *src;

	return (dest);
}
