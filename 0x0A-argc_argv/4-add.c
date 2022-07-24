#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - main function goes from here
 * @argc -  number of arguments to be passed
 * @argv: argument vector array list
 * Return: return some values
 */
int main(int argc, char *argv[])
{
	int i, j, length, sum;
	char *point;

	if (argc < 2)
		printf("0\n");
	else
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			point = argv[i];
			length = strlen(point);

			for (j = 0; j < length; j++)
			{
				if (isdigit(*(point + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			sum += atoi(argv[i]);
		}

		printf("%d\n", sum);
	}
	return (0);
}
