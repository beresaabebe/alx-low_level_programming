#include "main.h"
/**
 * _puts - function that check the codes
 * *str: pointer values
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
