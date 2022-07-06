#include "main.h"
/**
 * print_to_98 - a function that prints n to 98
 * @n: starting values
 * Return: return values
 */
void print_to_98(int n)
{
	int x;

	if (n <= 98)
	{
		for (x = n; x <= 98; x++)
		{
			_putchar(x);
			_putchar(',');
			if (x == 98)
				_putchar(' ');
		}
		_putchar('\n');
	}
	else
	{
		for (x = n; x>= 98; x--)
		{
			_putchar(x);
			_putchar(',');
			if (x == 98)
				_putchar(' ');
		}
		_putchar('\n');
	}
}
