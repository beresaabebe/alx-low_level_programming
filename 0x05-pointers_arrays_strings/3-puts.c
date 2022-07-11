#include "main.h"
/**
 * _puts - function that check the codes to print strings
 * @str: values to be passed
 * Return: always return some values
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
