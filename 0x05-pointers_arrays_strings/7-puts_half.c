#include "main.h"
/**
 * puts_half -  a function that prints half the string
 * @str : values to be pased
 * Return : always return some values
 */
void puts_half(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
		str++;
	
	i = i / 2;

	for (i = i; i != 0; i--)
		_putchar(*(str - 1));

	_putchar('\n');
}
