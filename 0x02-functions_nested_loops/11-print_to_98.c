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
			printf(x);
			if (x != 98)
				printf(',');
		}
		printf('\n');
	}
	else
	{
		for (x = n; x > 98; x--)
		{
			printf(x);
			if (x == 98)
				printf(',');
		}
		_putchar('\n');
	}
}
