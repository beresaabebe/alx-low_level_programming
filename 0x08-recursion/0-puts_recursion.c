#include "main.h"
/**
 * _puts_recursion - a funtion that print a string folled by a new line
 * @s: string
 * Return: Return success value
 */
void _puts_recursion(char *s)
{
	if (*s == 0)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
