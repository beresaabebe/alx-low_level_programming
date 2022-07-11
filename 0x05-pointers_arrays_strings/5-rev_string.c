#include "main.h"
#include <stdio.h>
/**
 * rev_string - function that reverse string
 * @s: values to be passed
 * Return: always return some values
 */
void rev_string(char *s)
{
	int i, j;
	char temp[500];

	for (i = 0; *s != '\0'; i++)
	{
		temp[i] = *s;
		s++;
	}

	s--;

	for (j = 0; j != i; j++)
	{
		*s = temp[j];
		s--;
	}

	s++;
}
