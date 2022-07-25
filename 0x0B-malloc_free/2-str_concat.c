#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen -  a funtion to return length of string
 * @s: char type
 * Return: return length of string
 */
int _strlen(char *s)
{
	int a;
	for (a = 0; s[a] != '\0'; a++)
	{
	}
	return (a);
}
/**
 * _strncat -  a funtion to concatenate strings with bytes
 * @dest: destination string
 * @src: source string
 * @n: char size int type
 * Return: return dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len, a;

	dest_len = _strlen(dest);
	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[dest_len + a] = src[a];
	return (dest);
}
/**
 * *str_concat - a funtion to allocate space
 * @s1: array pointer to destination
 * @s2: array pointer to source of string
 * Return: return pointer to string
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int size1, size2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	size1 = _strlen(s1);
	size2 = _strlen(s2);

	ptr = malloc(((size1 + size2) + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	_strncat(ptr, s1, size1);
	_strncat(ptr, s2, size2);
	ptr += '\0';
	return (ptr);
}
