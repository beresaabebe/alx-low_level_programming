#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - check the code for Holberton School students.
 * Return: Always 0.
 */
int main(void)
{
	char seed[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char password[22];
	int i, n, pass, compl;

	srand(time(0));

	for (i = 0; pass < 2772; i++)
	{
		n = rand() % 10;
		password[i] = seed[n];
		pass += password[i];
	}
	compl = 2772 - pass;
	password[i] = compl;
	printf("%s\n", password);
	return (0);
}
