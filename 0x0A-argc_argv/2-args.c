#include <stdio.h>
/**
 * main - a main function start here
 * @argc: argument counts
 * @argv: argument vector
 * Return: return some values
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
