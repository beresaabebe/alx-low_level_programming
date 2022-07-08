#include "main.h"
/**
 * more_numbers - a function that return number 0 to 14
 * Return: return success from the code
 */
void more_numbers(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = 0; y <= 14; y++)
		{
			_putchar(y, '0');
		}
		_putchar('\n');
	}
	_putchar('\n');
}
