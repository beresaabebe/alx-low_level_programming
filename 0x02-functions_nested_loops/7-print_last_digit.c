#include "main.h"
/**
 * print_last_digit - a function that prints the ;ast digit of a number
 * @lastd: last digit value
 * Return: values of the last digis
 */
int print_last_digt(int lastd)
{
	int ldigit;

	ldigit = (lastd % 10);

	if (ldigit < 0)
		ldigit = (-1 * ldigit);
	_putchar(ldigit + '0');
	return (ldigit);
}
