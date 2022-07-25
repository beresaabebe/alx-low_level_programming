#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _strlen - a funtion to return length of string
 * @s: char type variable
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
 * *_strdup: a funtion that return pointer to string
 * @str: pointer to array of string
 * Return: return pointer to string
 */
char *_strdup(char *str)
{
	char *ptr;
	int size;
	int x;

	if (str == NULL)
	{
		return (NULL);
	}
	size = _strlen(str) + 1;
	ptr = malloc(size * sizeof(char));

	x = 0;
	while (x < size)
	{
		if (ptr == NULL)
		{
			return (NULL);
		}

		ptr[x] = str[x];
		x++;
	}

	return (ptr);
}
