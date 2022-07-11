#include "main.h"
/**
 * puts_half -  a function that prints half the string
 * @str : values to be pased
 * Return : always return some values
 */
void puts_half(char *str)
{
	int i, n, len;

	len = 0;

	for (i = 0; str[i] != '\0'; i++)
		len++;
	
	n = (n / 2);

	if ((len % 2) == 1)
		n = ((len +1) / 2);
	
	for (i = n; str[i] != '\0'; i++)
		_putchar(str[i]);

	_putchar('\n');
}
