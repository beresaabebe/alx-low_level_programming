#include "main.h"
#include <stdio.h>
/**
 * print_rev - a function that prints string in reverse order
 * @s: values to be passed
 * Return: always return some values
 */
void print_rev(char *s)
{
	int len;

	for (len = 0; *s != '\0'; len++)
		s++;
	s--;

	for (len = len; len != 0; len--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
