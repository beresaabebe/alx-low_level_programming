#include "main.h"
/**
 * _strcmp -  a function that copy  a string values
 * @dest: destination values
 * @src: source values
 * @n: copy limit
 * Return: return values
 */
char *_strcmp(char *s1, char *s2)
{
	int a = 0, b = 0, c = 0, i = 0, lim;

	while (s1[a])
		a++;
	while (s2[b])
		b++;
	if (a <= b)
		lim = a;
	else
		lim = b;
	while (c <= lim)
	{
		if (s1[c] == s2[c])
		{
			c++;
			continue;
		}
		else
		{
			i = s1[c] - s2[c];
			break;
		}
		c++;
	}

	return (i);
}
