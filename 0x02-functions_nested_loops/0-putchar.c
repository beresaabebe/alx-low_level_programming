#include <main.h>

/**
 * main - everything goes from here
 * Return : always show as success value 
 */

int main(void)
{
	char *c = "_putchar";

	while (*c)
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');

	return (0);
}
