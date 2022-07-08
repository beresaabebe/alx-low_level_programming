#include "main.h"

/**
 * print_line - a function that draws a straight line in the terminal
 * @c: input number of times to print '_'
 * Return: a straight line
 */
void print_line(int c)
{
	int co;

	if (c <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (co = 1; co <= c; co++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
