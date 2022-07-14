#include "main.h"
/**
 * string_toupper - a function that changes string to upper case
 * @p: String to be passed
 * Return: return converted values
 */
char *string_toupper(char *p)
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 97 && p[a] <= 122)
		{
			p[a] -= 32;
		}

		a++;
	}

	return (p);
}
