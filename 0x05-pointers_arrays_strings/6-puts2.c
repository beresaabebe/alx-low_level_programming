#include "main.h"
/**
 * puts2 - a function that prints every other character of strings
 * @str : values to pass
 * Return : always return some values
 */
void puts2(char *str)
{
	int i;

	for (i = 0; *str != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(*str);
		str++;
	}
	_putchar('\n');
}
