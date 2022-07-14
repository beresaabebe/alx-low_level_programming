<<<<<<< HEAD
it
=======
#include "main.h"
#include <stdio.h>

/**
  * cap_string - ...
  * @s: ...
  * Return: char value
  */
char *cap_string(char *s)
{
	int a = 0, i;
	int cspc = 13;
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};

>>>>>>> 0f5ad58a5418bbf80e2a20ec80a4db29bb8be890
	while (s[a])
	{
		i = 0;

		while (i < cspc)
		{
			if ((a == 0 || s[a - 1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;

			i++;
		}

		a++;
	}

	return (s);
}
