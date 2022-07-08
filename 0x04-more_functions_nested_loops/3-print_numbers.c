#include "main.h"
/**
 * print_numbers - a function that prints number 0 - 9
 * Return: return success value
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		putchar("%c", c);
	}
	putchar('\n');
}
