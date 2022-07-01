#include <stdio.h>

/**
 * main - everythings goes from here
 * Return: always return success
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}
