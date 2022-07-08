#include "main.h"
/**
 * print_line -  a function checks for digit
 * @n: n is a variable
 * Return: always return 0
 */
void print_line(int n)
{
	int x;

	if (n > 0)
	{
		for (x = 1; x <= n; x++)
			_putchar(95);
	}
	_putchar('\n');
}
