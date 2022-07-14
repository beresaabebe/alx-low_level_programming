#include "main.h"
/**
 * cap_string - a function that capitalizes all words of a string
 * @s: string to be passed
 * Return: return values
 */
char *cap_string(char *s)
{
	int a = 0;
	int i;
	int lim = 13;
	char sept[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

	while (s[a])
	{
		i = 0;

		while (i < lim)
		{
			if ((a == 0 || s[a - 1] == sept[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;
			i++;
		}
		a++;
	}
	return (s);
}
