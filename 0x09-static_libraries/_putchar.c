#include "main.h"
#include <unistd.h>
/**
 * _putchar - a function that put chars
 * @c: character values
 * Return: return some values
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
