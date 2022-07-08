#include "main.h"
/**
 * print_numbers - a function that prints number 0 - 9
 * Return: return success value
 */
void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
		putchar(c + '0');
	putchar('\n');
}
