#include "main.h"
/**
 * leet -  a function encodes a string into 1337
 * @s:a string to be passed
 *
 * Return: return endoded string
 */
char *leet(char *s)
{
	int a = 0, b = 0, l = 5;
	char r[5] = {'A', 'E', 'O', 'T', 'L'};
	char n[5] = {'4', '3', '0', '7', '1'};

	while (s[a])
	{
		b = 0;

		while (b < 1)
		{
			if (s[a] == r[b] || s[a] == r[b])
			{
				s[a] = n[b];
			}

			b++;

		}

		a++;
	}
	return (s);
}
