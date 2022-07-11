#include "main.h"
/**
 * _strlen - a function that checks char length
 * @s: char values
 * Return: always return some values
 */
int _strlen(char *s)
{
	int len;
	
	for (len = 0; *s != '\0'; len++)
		s++;
	return (len);
}
