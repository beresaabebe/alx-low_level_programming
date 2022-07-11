#include "main.h"
#include <stdio.h>
/**
 * _atoi - check the code for Holberton School students.
 * @s: pointer char type
 * Return: Always 0.
 */
int _atoi(char *s)
{
	int negative = 1;
	int i = 0;
	unsigned int zero = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			negative *= -1;
		else if (s[i] >= 0 + '0' && s[i] < 10 + '0')
			zero = zero * 10 + (s[i] - '0');
		else if (s[i - 1] >= 0 + '0' && s[i - 1] < 10 + '0')
			break;
	}

	return (zero * negative);
}
