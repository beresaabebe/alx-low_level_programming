#include "main.h"
/**
 * print_times_table -  a function that prints times table for n
 * @n : the multiple table request
 * Return: values to be returned
 */
void print_times_table(int n)
{
	int i, j, result;

	if (!(n > 15 || n < 0))
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				res = i * j;
				if (j != 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (res < 10 && j != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((res % 10) + '0');
				}
				else if (res >= 10 && res < 100)
				{
					_putchar(' ');
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
				}
				else if (res >= 100 && j != 0)
				{
					_putchar((res / 100) + '0');
					_putchar((res / 10) + '0');
					_putchar((res % 10) + '0');
				}
				else
					_putchar((res % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
